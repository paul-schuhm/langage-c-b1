#include <math.h>
#include <stddef.h>
#include <stdio.h>

// Exercice 5: Opérations sur les vecteurs (algebre linéaire)
// Compiler : gcc exercice5.c -lm (link lib maths pour sqrt)

void print_vector(float *const);
void add(float *const, float *const, float *);
void scale(float *, float);
float cart_product(float *const, float *const);
void mat_mult(float matrix[][3], float *);
float norm(float *const);

void print_vector(float *const u) {
  printf("u=(%.2f,%.2f, %.2f)\n", u[0], u[1], u[2]);
}

void add(float *const u, float *const v, float *w) {
  *w = *u + *v;
  *(w + 1) = *(u + 1) + *(v + 1);
  *(w + 2) = *(u + 2) + *(v + 2);
  return;
}

void scale(float *u, float a) {
  // Avec notation vecteur.
  *u *= a;
  *(u + 1) *= a;
  *(u + 2) *= a;
}

float cart_product(float *const u, float *const v) {
  return u[0] * v[0] + u[1] * v[1] + u[2] * v[2];
}

void mat_mult(float matrix[][3], float *v) {
  // Sinon on écrase les valeurs au fur et a mesure !
  float tmp[3];
  tmp[0] = matrix[0][0] * v[0] + matrix[0][1] * v[1] + matrix[0][2] * v[2];
  tmp[1] = matrix[1][0] * v[0] + matrix[1][1] * v[1] + matrix[1][2] * v[2];
  tmp[2] = matrix[2][0] * v[0] + matrix[2][1] * v[1] + matrix[2][2] * v[2];
  v[0] = tmp[0];
  v[1] = tmp[1];
  v[2] = tmp[2];
}

float norm(float *const u) {
  return sqrt(u[0] * u[0] + u[1] * u[1] + u[2] * u[2]);
}

// Une fonction plus générale pour calculer la norme
// d'un vecteur peu importe sa dimension (2,3, etc.)
float norm_general(const float *, size_t);
float norm_general(const float *v, size_t n) {
  float sum = 0.0f;
  for (size_t i = 0; i < n; ++i)
    sum += v[i] * v[i];
  return sqrtf(sum);
}

int main() {

  // 3 vecteurs orthogonaux et unitaires
  float u[3] = {1.0, 0., 0.};
  float v[3] = {0, 1.0, 0};
  float w[3] = {0, 0, 1.0};
  // Vecteur pour stocker la somme de 2 vecteurs.
  float u_plus_v[3];

  print_vector(u);
  add(u, v, u_plus_v);
  print_vector(u_plus_v);
  scale(u, 5);
  print_vector(u);
  double product = cart_product(u, v);
  printf("u * v = %.2f\n", product);
  // Matrice identité
  float id_matrix[3][3] = {
      {1, 0, 0},
      {0, 1, 0},
      {0, 0, 1},
  };
  mat_mult(id_matrix, u);
  print_vector(u);
  // Rotation de 90° dans le plan xy
  float rot_matrix[3][3] = {
      {0, -1, 0},
      {1, 0, 0},
      {0, 0, 1},
  };
  mat_mult(rot_matrix, u);
  print_vector(u);
  printf("Norme de u=%.2f\n", norm(u));
}
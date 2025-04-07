#include<stdio.h>

//prototype
void bubble_sort(int t[], int n);

void bubble_sort(int t[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(t[i]>t[j]){
                //swap
                int tmp = t[i];
                t[i] = t[j];
                t[j] = tmp;
            }
        }
    }
}

int main(){

    int t[] = {27, 400, -2000, 87, 85, -1, 38, 35, -19, 0};
    bubble_sort(t, 10);
    for(int i = 0; i < 10; i++)
        printf("%d\n", *(t+i));

    //Algorithme de Bubble Sort (voir quick sort)

    //Exercice 6 : Calcul de la médiane

    //Cas paire
    int grades_even[] = {12, 11, 9, 15, 20, 17, 2, 15};
    //Cas impaire
    int grades_odd[] = {12, 11, 9, 15, 20, 17, 2};

    //1. Trier par ordre croissant
    bubble_sort(grades_even, 6);
    bubble_sort(grades_odd, 5);

    //Cas paire: Moyenne autour du centre
    float median_even = (grades_even[6/2] + grades_even[6/2-1])/2;
    //Cas impaire
    float median_odd = grades_even[5/2];
    printf("Mediane paire : %.2f\n", median_even);
    printf("Mediane impaire : %.2f\n", median_odd);







     


}
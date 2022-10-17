#include <stdio.h>
#include <stdlib.h>
#define T 3

int main() {
    int **matr1, **matr2, **matr3;

    matr1 = (int **)malloc(T * sizeof(int *));
    for (int h = 0; h < T; h++)
        matr1[h] = (int *)malloc(T * sizeof(int));

    printf("Informar dados da primeira matriz: ");

    for (int i = 0; i < T; i++) {
        for (int j = 0; j < T; j++) {
            scanf("%d", &matr1[i][j]);
        }
    }

    printf("Informar dados da segunda matriz: ");

    matr2 = (int **)malloc(T * sizeof(int *));
    for (int h = 0; h < T; h++)
        matr2[h] = (int *)malloc(T * sizeof(int));

    for (int i = 0; i < T; i++) {
        for (int j = 0; j < T; j++) {
            scanf("%d", &matr2[i][j]);
        }
    }

    matr3 = (int **)malloc(T * sizeof(int *));
    for (int h = 0; h < T; h++)
        matr3[h] = (int *)malloc(T * sizeof(int));

    printf("\nMatriz 01: \n");

    for (int i = 0; i < T; i++) {
        for (int j = 0; j < T; j++) {
            printf("%d ", matr1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz 02: \n");

    for (int i = 0; i < T; i++) {
        for (int j = 0; j < T; j++) {
            printf("%d ", matr2[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz 03: \n");

    for (int i = 0; i < T; i++) {
        for (int j = 0; j < T; j++) {
            printf("%d ", matr1[i][j] + matr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
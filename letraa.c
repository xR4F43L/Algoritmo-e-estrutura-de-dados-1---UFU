#include <stdio.h>

int main() {
    char nome[] = "Carla Faria";
    char *p = &nome[0];
    double vet[10];

    while (*p != '\0') {
        printf("%c", *p);
        p++;
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        scanf("%lf", &vet[i]);
    }

    for (int i = 0; i < 10; i++) {
        printf("%lf ", vet[i]);
    }

    printf("\n");
    return 0;
}
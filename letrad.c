#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int count = -1;
    int *vet;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    vet = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }

    for (int i = 0; i < n; i++) {
        if ((vet[i] % 2) == 0) {
            count++;
            vet[count] = vet[i];
        }
    }

    vet = (int *)realloc(vet, count + 1);

    for (int i = 0; i < count + 1; i++)
        printf("%d ", vet[i]);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vet;
    int n;
    printf("Digite o tamanho do seu vetor: ");
    scanf("%d", &n);

    vet = (int *)malloc(sizeof(n * sizeof(int)));

    if (vet != NULL) {
        for (int i = 0; i < n; i++) {
            scanf("%d", &vet[i]);
        }
        for (int i = 0; i < n; i++) {
            printf("%d ", vet[i]);
        }
    }
    free(vet);
    return 0;
}

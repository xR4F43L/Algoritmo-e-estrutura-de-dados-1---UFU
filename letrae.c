#include <stdio.h>
#include <stdlib.h>
#define T 100

int main() {
    typedef struct {
        int cpf;
        char ec;
        char nome[][T];
    } clientes;

    int n, op, pos, f;
    int qt = 0;
    clientes *vetcliente;

    printf("Digite quantos clientes serão utilizados:");
    scanf("%d", &n);

    vetcliente = (clientes *)malloc(n * sizeof(clientes));

    printf("Opçoes disponiveis :\n");
    printf("1-Inserir cliente\n");
    printf("2-Remove cliente\n");
    printf("3-Mostrar CPFs\n");
    printf("4-Sair\n");
    printf("Digite a opção desejada: \n");
    scanf("%d", &op);

    while (op != 4) {
        int i = 0;
        int j = 0;

        switch (op) {
            case 1:
                if (qt != n) {
                    printf("Digite o cpf do cliente [%d]: ", qt + 1);
                    scanf("%d", &vetcliente[qt].cpf);
                    printf("Digite o estado civil do cliente [%d] (C - Casado , S- Solteiro, V- viuvo): ", i + 1);
                    scanf(" %c", &vetcliente[qt].ec);
                    printf("Quantos filhos essa pessoa tem: ");
                    scanf("%d", &f);
                    for (j = 0; j < f; j++) {
                        printf("Digite o nome do %dº filho(a) ", j + 1);
                        scanf(" %s", vetcliente[qt].nome[j]);
                    }
                    qt++;
                } else
                    printf("Vetor cheio!\n");
                break;
            case 2:
                printf("Digite qual cliente deve ser retirado: ");
                scanf("%d", &pos);

                for (i = pos; i < n - 1; i++)
                    vetcliente[i - 1] = vetcliente[i];

                vetcliente = (clientes *)realloc(vetcliente, (n - 1) * sizeof(clientes));
                n--;
                qt--;
                break;
            case 3:
                for (i = 0; i < n; i++)
                    printf("Cpf do cliente [%d] é %d \n", i + 1, vetcliente[i].cpf);
                break;
        }
        printf("Opçoes disponiveis :\n");
        printf("1-Inserir cliente\n");
        printf("2-Remove cliente\n");
        printf("3-Mostrar CPFs\n");
        printf("4-Sair\n");
        printf("Digite a opção desejada: \n");
        scanf("%d", &op);
    }
    return 0;
}
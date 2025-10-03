#include <stdio.h>

#define TAM1 10
#define TAM2 10
#define TAM3 (TAM1 + TAM2)

int main() {
    int vetor1[TAM1], vetor2[TAM2], vetor3[TAM3];
    int i, j;

    // Entrada do primeiro vetor
    printf("Digite %d numeros para o primeiro vetor:\n", TAM1);
    for (i = 0; i < TAM1; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    // Entrada do segundo vetor
    printf("\nDigite %d numeros para o segundo vetor:\n", TAM2);
    for (i = 0; i < TAM2; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    // Copiando vetor1 para vetor3
    for (i = 0; i < TAM1; i++) {
        vetor3[i] = vetor1[i];
    }

    // Copiando vetor2 para vetor3
    for (j = 0; j < TAM2; j++) {
        vetor3[TAM1 + j] = vetor2[j];
    }

    // Exibindo vetor3
    printf("\nVetor resultante com %d elementos:\n", TAM3);
    for (i = 0; i < TAM3; i++) {
        printf("%d ", vetor3[i]);
    }

    printf("\n");

    return 0;
}


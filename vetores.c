#include <stdio.h>

int main() {
    int vetor1[10], vetor2[10], vetor3[20];
    int i;

    // Leitura do primeiro vetor
    printf("Digite 10 números inteiros para o vetor 1:\n");
    for (i = 0; i < 10; i++) {
        printf("vetor1[%d]: ", i);
        scanf("%d", &vetor1[i]);
    }

    // Leitura do segundo vetor
    printf("\nDigite 10 números inteiros para o vetor 2:\n");
    for (i = 0; i < 10; i++) {
        printf("vetor2[%d]: ", i);
        scanf("%d", &vetor2[i]);
    }

    // Criando o terceiro vetor com os elementos dos dois primeiros
    for (i = 0; i < 10; i++) {
        vetor3[i] = vetor1[i];         // Copia os 10 primeiros elementos
        vetor3[i + 10] = vetor2[i];    // Copia os 10 próximos
    }

    // Exibindo o vetor resultante
    printf("\nVetor 3 (junção dos vetores 1 e 2):\n");
    for (i = 0; i < 20; i++) {
        printf("%d ", vetor3[i]);
    }

    printf("\n");

    return 0;
}


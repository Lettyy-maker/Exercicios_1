#include <stdio.h>

#define TAM 10  // tamanho do vetor

// Função Bubble Sort
void bubbleSort(int vetor[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - i - 1; j++) {
        if (vetor[j] > vetor[j + 1]) {
                // Troca os elementos de posição
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int main() {
    int vetor[TAM];
    int i;

    printf("Digite %d numeros inteiros:\n", TAM);
    for (i = 0; i < TAM; i++) {
        scanf("%d", &vetor[i]);
    }

    // Ordena o vetor usando Bubble Sort
    bubbleSort(vetor, TAM);

    // Exibe o vetor ordenado
    printf("\nVetor ordenado em ordem crescente:\n");
    for (i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

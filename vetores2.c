#include <stdio.h>

int main() {
    int vetor[10];
    int i, maior;

    // Entrada de dados
    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Inicializa 'maior' com o primeiro elemento
    maior = vetor[0];

    // Percorre o vetor para encontrar o maior valor
    for (i = 1; i < 10; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    // Exibe o resultado
    printf("\nO maior elemento do vetor e: %d\n", maior);

    return 0;
}

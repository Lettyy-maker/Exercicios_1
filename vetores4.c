#include <stdio.h>

// Função que verifica se A é menor ou igual a B
int validarIntervalo(int A, int B) {
    if (A <= B) {
        return 1; // válido
    } else {
        return 0; // inválido
    }
}

// Procedimento que imprime os números de A até B
void imprimirContagem(int A, int B) {
    printf("\nContagem de %d até %d:\n", A, B);
    for (int i = A; i <= B; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int A, B;

    printf("Digite o valor inicial A: ");
    scanf("%d", &A);

    printf("Digite o valor final B: ");
    scanf("%d", &B);

    // Verifica se o intervalo é válido usando a função
    if (validarIntervalo(A, B)) {
        imprimirContagem(A, B); // chama o procedimento
    } else {
        printf("\nErro: O valor inicial deve ser menor ou igual ao final.\n");
    }

    return 0;
}

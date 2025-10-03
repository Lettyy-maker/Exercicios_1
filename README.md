# Programa em C - Contagem entre A e B

Este programa em C solicita ao usuário dois valores inteiros **A** e **B**, e exibe todos os valores entre **A e B (inclusive)**.  
O programa foi desenvolvido utilizando **procedimento** e **função** em C, para demonstrar boas práticas de modularização.

---

## 📌 Funcionalidades
- Solicita o valor inicial (**A**) e o valor final (**B**).
- Verifica se o intervalo é válido (`A <= B`).
- Imprime todos os valores do intervalo de forma inclusiva.
- Uso de:
  - **Função**: `validarIntervalo(int A, int B)` → retorna se o intervalo é válido.
  - **Procedimento**: `imprimirContagem(int A, int B)` → imprime os valores.

---

## 🚀 Como compilar e executar

No terminal, execute os seguintes comandos:

```bash
# Compilar o programa
gcc main.c -o contagem

# Executar o programa
./contagem

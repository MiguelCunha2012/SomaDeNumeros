#include <stdio.h>

int main() {
    int soma;
    int numero;
    printf("Digite mai um numero. Caso queira somar todos, digite 0: ");
    while (1) {
        scanf("%d", &numero);
        printf("Digite outro numero: ");
        if (numero == 0) {
            break;
        }
        soma += numero;
    }
    printf("A soma de todos os numeros digitados: %d\n", soma);
    return 0;
}
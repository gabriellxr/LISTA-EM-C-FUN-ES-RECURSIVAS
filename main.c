#include <stdio.h>
#include <stdlib.h>

long long somaRecursiva(long long n) {
    if (n <= 1) {
        return n;
    }
    return n + somaRecursiva(n - 1);
}

int main() {

    long long numero;

    printf("Digite o valor de N: ");
    scanf("%lld", &numero);

    if (numero < 1) {
        printf("Por favor, digite um numero maior ou igual a 1.\n");
    } else if (numero > 100000) {
        printf("Valor muito grande para recursao!\n");
        printf("\n resultado da soma final e: %lld\n\n", numero * (numero + 1) / 2);
    } else {
        printf("\n resultado da soma final e: %lld\n\n", somaRecursiva(numero));
    }

    system("pause");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

long long calcularPotencia(long long base, int expoente) {
    if (expoente == 0) {
        return 1;
    }
    if (expoente == 1) {
        return base;
    }
    return base * calcularPotencia(base, expoente - 1);
}

int main() {

    long long base;
    int expoente;
    long long resultado = 0;

    printf("Digite o numero base: ");
    scanf("%lld", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    if (expoente < 0) {
        printf("Por favor, digite um expoente maior ou igual a 0.\n");
    } else if (expoente > 30) {
        printf("Valor muito grande para recursao!\n");
    } else {
        resultado = calcularPotencia(base, expoente);
        printf("\n resultado da potencia final e: %lld\n\n", resultado);
    }

    system("pause");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

long long fibonacci(long long n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {

    int quantidade;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &quantidade);

    if (quantidade <= 0) {
        printf("Por favor, digite um numero maior que 0.\n");
    } else if (quantidade > 40) {
        printf("Valor muito grande para recursao!\n");
        quantidade = 40;
    }

    printf("\n resultado da sequencia final e:\n");
    for (int i = 0; i < quantidade; i++) {
        printf("%lld ", fibonacci(i));
    }
    printf("\n\n");

    system("pause");
    return 0;
}

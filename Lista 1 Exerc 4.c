/*Fazer uma função que calcule o MDC (máximo
divisor comum) entre dois números.*/

#include <stdio.h>

int mdc(int a, int b);

int main (){
    int a, b;
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    printf("O MDC entre %d e %d é: %d\n", a, b, mdc(a, b));
    return 0;
}

int mdc(int a, int b) {
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}
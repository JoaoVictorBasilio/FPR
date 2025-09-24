/*Fazer uma função que calcule o MMC (mínimo
múltiplo comum) entre dois números.*/

#include <stdio.h>

int mmc(int a, int b);

int main (){
    int a, b;
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    printf("O MMC entre %d e %d é: %d\n", a, b, mmc(a, b));
    return 0;
}

int mmc(int a, int b) {
    int i, maior, produto;
    if (a > b) {
        maior = a;
    } else {
        maior = b;
    }
    produto = a * b;
    for (i = maior; i <= produto; i++) {
        if (i % a == 0 && i % b == 0) {
            return i;
        }
    }
    return i;
}
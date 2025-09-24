/*Desenvolver uma função que exiba os múltiplos
de N compreendidos no intervalo definido por
A e B.*/

#include <stdio.h>

int multiplos(int a, int b, int n){
    for(int i = a; i <= b; i++){
        if(i % n == 0){
            printf("%d ", i);
        }
    }
    return 0;
}

int main(){
    int a, b, n;
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    printf("Digite o valor de N: ");
    scanf("%d", &n);
    multiplos(a, b, n);
    return 0;
}
/*Implementar uma função que, dado um
número inteiro N, exiba uma sequência de
números como as ilustradas nos exemplos a
seguir:
Exemplo 1: N = 3
(1 2) (1 3) (2 1) (2 3) (3 1) (3 2)
Exemplo 2: N = 5
(1 2) (1 3) (1 4) (1 5) (2 1) (2 3) (2 4) (2 5) (3 1)
(3 2) (3 4) (3 5) (4 1) (4 2) (4 3) (4 5) (5 1) (5 2) (5
3) (5 4)*/

#include <stdio.h>

int sequencia(int n);

int main(){
    int n;
    printf("Digite um número inteiro N: ");
    scanf("%d", &n);
    sequencia(n);
    return 0;
}

int sequencia(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i != j){
                printf("(%d %d) ", i, j);
            }
        }
    }
    printf("\n");
    return 0;
}
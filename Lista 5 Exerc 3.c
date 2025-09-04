/*Desenvolver uma função recursiva que exiba
todos os múltiplos do número N, inferiores ou
iguais ao valor V.*/

#include <stdio.h>

void multiplosN(int N, int V, int i);

int main(){
    int valorN, valorV, i;
    printf("Digite o valor de N e V: \n");
    scanf("%d %d", &valorN, &valorV);
    multiplosN(valorN,valorV,0);
    return 0;
}

void multiplosN(int N, int V, int i){
    if(N>V){
        printf("O valor de N é maior que v!");
    }else {
        if(N*i <= V){
            printf("%d ", N*i);
            multiplosN(N,V,i+1);
        }
    }
    
}

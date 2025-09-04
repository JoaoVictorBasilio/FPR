/*Desenvolver uma função recursiva que, dados um
vetor de reais vet e um número real x, reorganize os
elementos do vetor de forma que todos os valores
inferiores a x estejam no seu início e,
consequentemente, os elementos iguais ou maiores
do que x fiquem no final do vetor.*/

#include <stdio.h>

void reorganizar(float vet[], float x , int i);

int main (){
    int tam=8, i=0;
    float vetor[8] = {3, 14, 17, 1, 7, 8, 9, 5};
    float x;

    printf("Digite um numero: ");
    scanf("%f", &x);

    reorganizar(vetor, x, i);

    printf("vetor reorganizado");

    for(i = 0; i <= tam; i++){
        printf("%.1f ", vetor[i]);
    }
    return 0;
}

void reorganizar(float vet[], float x, int i){
    int aux;
    
            
        if(vet[i] < vet[i+1]){
                aux =vet[i];
                vet[i]=vet[i+1];
                vet[i+1]=aux;
                reorganizar(vet, x, i+1);
                reorganizar(vet, x, i);
        }
        
    }

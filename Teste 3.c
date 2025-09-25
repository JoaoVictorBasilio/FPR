/*Dada uma matriz M de inteiros (cada qual com apenas
um algarismo), com x linhas e y colunas, desenvolver
uma função que crie um vetor V de x posições
contendo, em cada posição, as “representações
numéricas”de cada linha de M, como ilustrado no
exemplo abaixo:
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fazervetor(int x, int y, int matriz[x][y],int vet[x]);
void preenchermatriz(int m, int n, int matriz[m][n]);
void exibirmatriz(int m, int n, int matriz[m][n]);
void exibirvetor(int n, int vetor[n]);

int main(){
    int x,y;
    printf("Digite os valores de x e y: \n");
    scanf("%d %d",&x,&y);
    int matriz[x][y];
    int vetor[x];
    preenchermatriz(x,y,matriz);
    fazervetor(x,y,matriz,vetor);
    exibirmatriz(x,y,matriz);
    exibirvetor(x,vetor);
    return 0;

}

void exibirmatriz(int m, int n, int matriz[m][n]) {
     printf("\nMatriz:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void fazervetor(int x, int y, int matriz[x][y], int vet[x])
{
    int i,j,soma,mult=1,somaT,a=0;
    for(i=0;i<x;i++){
        soma=0;
        mult=1;
        somaT=0;
        for(j=y-1;j>=0;j--){
            soma+=matriz[i][j]*mult;
            mult=mult*10;
        }
        somaT+=soma;
        vet[a]=somaT;
        a++;
    }
}

void preenchermatriz(int m, int n, int matriz[m][n]){
    srand(time(NULL));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            matriz[i][j] = rand() % 10;
        }
    }
    exibirmatriz(m,n,matriz);
}

void exibirvetor(int n, int vetor[n])
{
    printf("\nVetor:\n");
    for(int i=0;i<n;i++){
        printf("%d, ", vetor[i]);
    }
    printf("\n");
}
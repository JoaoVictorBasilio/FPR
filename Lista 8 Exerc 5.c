/*Implementar uma função que, dada uma matriz
Mm×n, gere um vetor V de tamanho n, onde
cada elemento do vetor consiste na soma dos
elementos de uma coluna de M. Ou seja, o
elemento V[0] consiste na soma dos elementos
da primeira coluna de M, o elemento V[1]
consiste na soma dos elementos da segunda
coluna de M, e assim por diante.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preenchermatriz(int m, int n, int matriz[m][n]);
void preenchendovetor(int m, int n, int matriz[m][n], int vetor[n]);
void exibirmatriz(int m, int n, int matriz[m][n]);
void exibirvetor(int n, int vetor[n]);

int main(){
    
int m,n;
printf("Digite os valores de m e n: \n");
scanf("%d %d", &m, &n);
int M[m][n];
int V[n];

preenchermatriz(m,n,M);
preenchendovetor(m,n,M,V);
exibirmatriz(m,n,M);
exibirvetor(n,V);

    return 0;
}

void preenchermatriz(int m, int n, int matriz[m][n])
{
    int i,j;
    srand(time(NULL));
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            matriz[i][j] = rand() % 10;
        }
    }
}

void preenchendovetor(int m, int n, int matriz[m][n], int vetor[n])
{
    int soma,i,j;
    for(i=0;i<n;i++){
        soma=0;
        for(j=0;j<m;j++){
            soma+=matriz[j][i];
            vetor[i]=soma;
        }
    }
}

void exibirvetor(int n, int vetor[n])
{
    printf("\nVetor:\n");
    for(int i=0;i<n;i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
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


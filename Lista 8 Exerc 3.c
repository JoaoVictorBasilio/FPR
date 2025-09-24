/*Desenvolver uma função que gere uma matriz
Mnn, nos moldes do exemplo apresentado a
seguir (que consiste em uma matriz de ordem
5)
1 2 3 4 5
2 3 4 5 6
3 4 5 6 7
4 5 6 7 8
5 6 7 8 9*/

#include <stdio.h>

void criarmatriz(int n, int matriz[n][n]);
void exibirmatriz(int m, int n, int matriz[m][n]);

int main(){

    int n;
    printf("Digite o valor de n: \n");
    scanf("%d", &n);
    int matriz[n][n];

    criarmatriz(n, matriz);
    exibirmatriz(n, n, matriz);

    return 0;
}

void criarmatriz(int n, int matriz[n][n])
{
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            matriz[i][j]= 1 + j + i;
        }
    }
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
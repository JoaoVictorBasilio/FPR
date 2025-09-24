/*Faça uma função que, dada uma matriz Mm×n de
reais, gere a matriz Mt
, sua transposta.*/

#include <stdio.h>

void exibirmatriz(int m, int n, float matriz[m][n]);
void matriztransposta( int m, int n, float matriz[m][n]);

int main(){
    int m,n,i,j=0;
    printf("Digite o valor de m e n: ");
    scanf("%d %d", &m, &n);
    float matriz[m][n];
    
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Digite um valor: ");
        scanf("%f", &matriz[i][j]);
        }
    }

    exibirmatriz(m, n, matriz);
    matriztransposta(m, n, matriz);
    
    return 0;
}

void exibirmatriz(int m, int n, float matriz[m][n]) {
     printf("\nMatriz:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.1f ", matriz[i][j]);
        }
        printf("\n");
    }
}

void matriztransposta(int m, int n, float matriz[m][n])
{
    float transposta[n][m];
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            transposta[i][j]=matriz[j][i];
        }//
    }
    exibirmatriz(n,m,transposta);
}

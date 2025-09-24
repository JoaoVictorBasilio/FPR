/*Desenvolver uma função que, dada uma matriz
Mm×n, determine se um número X se encontra
na linha L da matriz.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preenchermatriz(int m, int n, int matriz[m][n]);
void exibirmatriz(int m, int n, int matriz[m][n]);
void acharnumero(int m,int n, int matriz[m][n]);

int main(){
    int m,n;
    printf("Digite o valor de m e n: \n");
    scanf("%d %d", &m, &n);
    int matriz[m][n];
    
    
    preenchermatriz(m, n, matriz);
    exibirmatriz(m, n, matriz);
    acharnumero(m, n, matriz);

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

void acharnumero(int m, int n, int matriz[m][n])
{
    int l, x, cont=0;
    printf("Digite qual a linha que deseja procurar e qual número deseja achar: \n");
    scanf("%d %d", &l, &x);
    if(l>m){
        printf("essa linha não existe! tente novamente\n");
        acharnumero(m, n, matriz);
    }else{
    for(int i=0;i<n;i++){
        if(matriz[l-1][i]==x){
            printf("O número foi achado na posicão %d %d", l,i);
            cont++;
            break;
        }
    }
    if(cont==0){
        printf("Número não achado");
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
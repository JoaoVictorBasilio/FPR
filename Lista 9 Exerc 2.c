/*Implementar uma função que, dadas uma matriz M de inteiros (com lin linhas e col colunas) e duas colunas c1 e c2, inverta
a ordem (por linha) dos elementos compreendidos entre estas colunas.
Exemplo:
 c1    c2
1 2 4 8 6 2 0
9 7 4 0 3 1 0
8 8 4 1 2 0 1
4 7 2 1 5 4 8
2 1 2 4 0 1 0
1 8 7 2 1 3 6
9 4 5 2 0 3 2
0 1 3 5 6 9 8
7 4 1 2 3 5 0

1 6 8 4 2 2 0
9 3 0 4 7 1 0
8 2 1 4 8 0 1
4 5 1 2 7 4 8
2 0 4 2 1 1 0
1 1 2 7 8 3 6
9 0 2 5 4 3 2
0 6 5 3 1 9 8
7 3 2 1 4 5 0

Nota: se as colunas c1 e c2 forem inválidas, nada será realizado e o valor 0 retornado pela função; caso contrário,
a inversão dos elementos será feita e o código 1 retornado.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preenchermatriz(int m, int n, int matriz[m][n]);
void exibirmatriz(int m, int n, int matriz[m][n]);
int trocarcolunas(int m, int n,int matriz[m][n]);

int main(){
    int m,n;
    printf("Digite o valor de m e n: \n");
    scanf("%d %d",&m,&n);
    int matriz[m][n];

    preenchermatriz(m,n,matriz);
    trocarcolunas(m,n,matriz);

    return 0;
}

void preenchermatriz(int m, int n, int matriz[m][n]){
    srand(time(NULL));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            matriz[i][j] = rand() % 100;
        }
    }
    exibirmatriz(m,n,matriz);
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

int trocarcolunas(int m, int n, int matriz[m][n])
{
    int c1,c2,aux;
    printf("Digite o valor de c1 e de c2 sendo c1<c2: \n");
    scanf("%d %d", &c1,&c2);
    if(c1<1 || c1 > n || c2<1 || c2>n){
        return 0;
    }
    c1=c1-1;
    c2=c2-1;
    while(c1<c2){
    for(int i=0;i<m;i++){
        for(int j=c1;j<c2;j++){
            aux=matriz[i][j];
            matriz[i][j]=matriz[i][c2];
            matriz[i][c2]=aux;
            break;
        }
    }
    c1++;
    c2--;
}
    exibirmatriz(m,n,matriz);
    return 1;
}

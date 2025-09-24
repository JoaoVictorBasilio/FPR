/*O conceito de simetria de matrizes considera a diagonal principal como referencial. Porém, supondo que se deseja
determinar se uma matriz é simétrica em relação às colunas, pede-se o desenvolvimento de uma função que, dada uma
matriz de ordem n, verifique se é ou não “simétrica verticalmente”.*/

#include <stdio.h>

void verificarsimetria(int n, int matriz[n][n]);

int main(){
   int n;
   printf("Digite o valor de n: \n");
   scanf("%d", &n);
   int matriz[n][n];
   for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Digite o valor: \n");
            scanf("%d",&matriz[i][j]);
}
   }
   verificarsimetria(n,matriz);
   return 0;
}

void verificarsimetria(int n, int matriz[n][n])
   {
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n/2; j++){
            if(matriz[i][j] != matriz[i][n-1-j]){
                printf("A matriz não é simétrica.\n");
                return;
            }
        }
    }
    printf("A matriz é simétrica.\n");
}

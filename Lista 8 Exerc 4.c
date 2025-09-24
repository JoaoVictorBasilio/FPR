/*Fazer uma função que, dada uma matriz Mn×n,
determine se ela é simétrica.*/

#include <stdio.h>

void verificarsimetria(int n, int matriz[n][n]);

int main(){
    int n,i,j;
    printf("Digite o valor de n: \n");
    scanf("%d", &n);
    int matriz [n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        printf("Digite um valor: \n");
        scanf("%d", &matriz[i][j]);
    }
}

verificarsimetria(n,matriz);

    return 0;
}

void verificarsimetria(int n, int matriz[n][n])
{
    int cont=0, a=n * n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(matriz[i][j]==matriz[j][i]){
                cont++;
            }else{
                break;
            }
        }
    }
    if(cont==a){
        printf("A matriz é simétrica.\n");
    } else {
        printf("A matriz não é simétrica\n");
    }
}

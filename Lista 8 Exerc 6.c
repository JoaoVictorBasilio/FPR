/*Considere uma loja que mantém em uma
matriz o total vendido por cada funcionário
pelos diversos meses do ano. Ou seja, uma
matriz de 12 linhas (uma por mês) e 10 colunas
(10 funcionários). Pede-se o desenvolvimento
de uma função para cada item abaixo:
a. Calcular o total vendido durante o ano;
b. Dado um mês fornecido pelo usuário,
determinar o total vendido nesse mês;
c. Dado um funcionário fornecido pelo
usuário, determinar o total vendido por ele
durante o ano;
d. Determinar o mês com maior índice de
vendas;
e. Determinar o funcionário que menos
vendeu durante o ano.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preenchermatriz(int m, int n, int matriz[m][n]);
void exibirmatriz(int m, int n, int matriz[m][n]);
void totalano(int m, int n, int matriz[m][n]);
void totalmes(int m,int n, int matriz[m][n]);
void totalfuncionario(int m,int n, int matriz[m][n]);
void mescommaiorvendas(int m, int n, int matriz[m][n]);
void funcionariofraco(int m, int n, int matriz[m][n]);

int main(){
    int m=12,n=10;
    int matriz[m][n];

    preenchermatriz(m,n,matriz);
    exibirmatriz(m,n,matriz);
    totalano(m,n,matriz);
    totalmes(m,n,matriz);
    totalfuncionario(m,n,matriz);
    mescommaiorvendas(m,n,matriz);
    funcionariofraco(m,n,matriz);

    return 0;
}

void preenchermatriz(int m, int n, int matriz[m][n]){
    srand(time(NULL));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            matriz[i][j] = rand() % 100;
        }
    }
}

void exibirmatriz(int m, int n, int matriz[m][n]) {
    printf("\nMatriz de vendas (meses x funcionários):\n");
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void totalano(int m, int n, int matriz[m][n]) {
    int soma=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            soma += matriz[i][j];
        }
    }
    printf("\nO total vendido durante o ano foi %d vendas.\n", soma);
}

void totalmes(int m, int n, int matriz[m][n]){
    int mes,soma=0;
    printf("\nEscolha o mês:\n"
           "1-Janeiro\n2-Fevereiro\n3-Março\n4-Abril\n5-Maio\n6-Junho\n"
           "7-Julho\n8-Agosto\n9-Setembro\n10-Outubro\n11-Novembro\n12-Dezembro\n");
    scanf("%d",&mes);

    for(int i=0;i<n;i++){
        soma += matriz[mes-1][i];
    }

    switch(mes){
        case 1: 
        printf("O total vendido em Janeiro foi %d vendas.\n", soma); 
        break;
        case 2: 
        printf("O total vendido em Fevereiro foi %d vendas.\n", soma); 
        break;
        case 3: 
        printf("O total vendido em Março foi %d vendas.\n", soma); 
        break;
        case 4: 
        printf("O total vendido em Abril foi %d vendas.\n", soma); 
        break;
        case 5: 
        printf("O total vendido em Maio foi %d vendas.\n", soma); 
        break;
        case 6: 
        printf("O total vendido em Junho foi %d vendas.\n", soma); 
        break;
        case 7: 
        printf("O total vendido em Julho foi %d vendas.\n", soma); 
        break;
        case 8: 
        printf("O total vendido em Agosto foi %d vendas.\n", soma); 
        break;
        case 9: 
        printf("O total vendido em Setembro foi %d vendas.\n", soma); 
        break;
        case 10: 
        printf("O total vendido em Outubro foi %d vendas.\n", soma); 
        break;
        case 11: 
        printf("O total vendido em Novembro foi %d vendas.\n", soma); 
        break;
        case 12: 
        printf("O total vendido em Dezembro foi %d vendas.\n", soma); 
        break;
    }
}

void totalfuncionario(int m, int n, int matriz[m][n]){
    int funcionario,soma=0;
    printf("\nEscolha o funcionário:\n"
           "1-João\n2-Fellipe\n3-Maria\n4-Ana\n5-Marcos\n"
           "6-Jonathan\n7-Junior\n8-Amanda\n9-Suyanne\n10-Otavio\n");
    scanf("%d",&funcionario);

    for(int i=0;i<m;i++){
        soma += matriz[i][funcionario-1];
    }

    switch(funcionario){
        case 1: 
        printf("O total vendido pelo funcionário João foi %d vendas.\n", soma); 
        break;
        case 2: 
        printf("O total vendido pelo funcionário Fellipe foi %d vendas.\n", soma); 
        break;
        case 3: 
        printf("O total vendido pelo funcionário Maria foi %d vendas.\n", soma); 
        break;
        case 4: 
        printf("O total vendido pelo funcionário Ana foi %d vendas.\n", soma); 
        break;
        case 5: 
        printf("O total vendido pelo funcionário Marcos foi %d vendas.\n", soma); 
        break;
        case 6: 
        printf("O total vendido pelo funcionário Jonathan foi %d vendas.\n", soma); 
        break;
        case 7: 
        printf("O total vendido pelo funcionário Junior foi %d vendas.\n", soma); 
        break;
        case 8: 
        printf("O total vendido pelo funcionário Amanda foi %d vendas.\n", soma); 
        break;
        case 9: 
        printf("O total vendido pelo funcionário Suyanne foi %d vendas.\n", soma); 
        break;
        case 10: 
        printf("O total vendido pelo funcionário Otavio foi %d vendas.\n", soma);
        break;
}
}

void mescommaiorvendas(int m, int n, int matriz[m][n]){
    int maior=0, somamaior=0;
    for(int i=0;i<m;i++){
        int soma=0;
        for(int j=0;j<n;j++){
            soma+=matriz[i][j];
        }
        if(soma > somamaior){
            maior=i+1;
            somamaior=soma;
        }
    }
    switch(maior){
        case 1:  
        printf("\nO mês com mais vendas foi Janeiro.\n"); 
        break;
        case 2:  
        printf("\nO mês com mais vendas foi Fevereiro.\n"); 
        break;
        case 3:  
        printf("\nO mês com mais vendas foi Março.\n"); 
        break;
        case 4:  
        printf("\nO mês com mais vendas foi Abril.\n"); 
        break;
        case 5:  
        printf("\nO mês com mais vendas foi Maio.\n"); 
        break;
        case 6:  
        printf("\nO mês com mais vendas foi Junho.\n"); 
        break;
        case 7:  
        printf("\nO mês com mais vendas foi Julho.\n"); 
        break;
        case 8:  
        printf("\nO mês com mais vendas foi Agosto.\n"); 
        break;
        case 9:  
        printf("\nO mês com mais vendas foi Setembro.\n"); 
        break;
        case 10: 
        printf("\nO mês com mais vendas foi Outubro.\n"); 
        break;
        case 11: 
        printf("\nO mês com mais vendas foi Novembro.\n"); 
        break;
        case 12: 
        printf("\nO mês com mais vendas foi Dezembro.\n"); 
        break;
    }
}

void funcionariofraco(int m, int n, int matriz[m][n]){
    int menorFunc=-1, somamenor=999999;
    for(int j=0;j<n;j++){
        int soma=0;
        for(int i=0;i<m;i++){
            soma+=matriz[i][j];
        }
        if(soma < somamenor){
            somamenor=soma;
            menorFunc=j+1;
        }
    }
    switch(menorFunc){
        case 1:  
        printf("\nO funcionário com menos vendas foi João.\n"); 
        break;
        case 2:  
        printf("\nO funcionário com menos vendas foi Fellipe.\n"); 
        break;
        case 3:  
        printf("\nO funcionário com menos vendas foi Maria.\n"); 
        break;
        case 4:  
        printf("\nO funcionário com menos vendas foi Ana.\n"); 
        break;
        case 5:  
        printf("\nO funcionário com menos vendas foi Marcos.\n"); 
        break;
        case 6:  
        printf("\nO funcionário com menos vendas foi Jonathan.\n"); 
        break;
        case 7:  
        printf("\nO funcionário com menos vendas foi Junior.\n"); 
        break;
        case 8:  
        printf("\nO funcionário com menos vendas foi Amanda.\n"); 
        break;
        case 9:  
        printf("\nO funcionário com menos vendas foi Suyanne.\n"); 
        break;
        case 10: 
        printf("\nO funcionário com menos vendas foi Otavio.\n"); 
        break;
    }
}

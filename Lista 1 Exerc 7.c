/*Implementar uma função que, dado um
número inteiro n, e o intervalo definido pelos
números a e b, determine quantos valores do
intervalo possuem divisores (sendo estes
diferentes de 1) que também sejam divisores
de n.
Exemplo:
n = 6
a = 10 e b = 20
Resposta = 7 (pois os números 10, 12, 14,
15, 16, 18 e 20 possuem divisores em
comum com o número 6).*/

#include <stdio.h>

int divisores(int n, int a, int b);

int main() {
    int n, a, b, Ndivisores;
    printf("Digite o valor de N: ");
    scanf("%d", &n);
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    Ndivisores = divisores(n, a, b);
    printf("Quantidade de números com divisores em comum: %d\n", Ndivisores);
    return 0;
}

int divisores(int n, int a, int b) {
    int i, j, cont = 0;

    // Garantir que o intervalo seja percorrido corretamente
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    // Percorrer o intervalo de a até b
    for (i = a; i <= b; i++) {
        // Verificar se o número i tem divisores em comum com n
        for (j = 2; j <= i; j++) { // Começa em 2 para ignorar o divisor 1
            if (i % j == 0 && n % j == 0) {
                cont++;
                break; // Basta encontrar um divisor em comum
            }
        }
    }

    return cont;
}
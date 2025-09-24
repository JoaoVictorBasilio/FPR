/*Implementar uma função que converta
determinada temperatura em graus Celsius
para graus Fahrenheit.*/

#include <stdio.h>
float temperatura(float c);
int main(){
    float c, f;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &c);
    f=temperatura(c);
    printf("A temperatura em Fahrenheit é: %.2f\n", f);
    return 0;
}
float temperatura(float c){
    float f;
    f = (c * 9/5) + 32;
    return f;
}
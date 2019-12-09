#include <stdio.h>

int inputs(int num1,int num2){

    printf("Insira um valor: ");
    scanf("%d", &num1);
    printf("Insira outro valor: ");
    scanf("%d", &num2);

}

void somas(int soma){

    soma = num1 + num2;

}

int main (void) {

    inputs(0,0);
    somas(0);

}
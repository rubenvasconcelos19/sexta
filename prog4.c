#include <stdio.h>

int main(void){

    int num1;
    int num2;
    int soma;

    printf("Insira um número inteiro para somar com o próximo número : ");

    scanf("%d", &num1);

    printf("Agora insira outro número inteiro para ser somado ao %d: ", num1);

    scanf("%d", &num2);

    soma = num1 + num2;

    printf("Os números foram %d e %d e a soma é %d\n", num1 , num2 , soma);


    return 0;
}
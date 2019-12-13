#include <stdio.h>

int main(void){
    
    const int cons = 15;
    int num1;
    int num2;

    printf ("Insira o primeiro número \n");
    scanf("%d", &num1);
    printf("Insira o segundo número \n");
    scanf(" %d", &num2);

    if(num1 > num2 && num2 > cons){
        printf("%d é o maior, seguido de %d e de %d\n", num1, num2, cons);
    } else if(num2 > num1 && num1 > cons){
            printf("%d é o maior, seguido de %d e de %d\n", num2, num1, cons);
    } else if(cons > num1 && num1 > num2){
            printf("%d é o maior, seguido de %d e de %d\n", cons, num1, num2);
    } else if(cons > num2 && num2 > num1){
            printf("%d é o maior, seguido de %d e de %d\n", cons, num2, num1);
    } else if(num2 > cons && cons > num1){
            printf("%d é o maior, seguido de %d e de %d\n",num2 , cons, num1);
    } else if(num1 > cons && cons > num2){
            printf("%d é o maior, seguido de %d e de %d\n", num1, cons, num2);
    } else {
        printf("Coisa Qualquer\n");
}
}
#include <stdio.h>

int main(){


    int a;
    int b;


    printf("Este programa compara dois números.\n");

    printf("Insira o primeiro número: ");

    scanf("%d", &a);

    printf("Agora insira o segundo número: ");

    scanf("%d", &b);

    if(a==b){
        printf("%d e %d têm o mesmo valor.\n", a, b);
    } else {
    if(a>b){
        printf("%d é maior do que %d.\n", a , b);
    } else {
        printf("%d é maior do que %d.\n", b, a);
    }
    }
    return 0;
}
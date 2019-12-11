#include <stdio.h>

int main(void){
    char estado;
    char nome [100];

    printf("Insira o seu nome: ");
    scanf("%s", nome);

    printf("Insira o seu estado('S','C','U','D','V'): ");
    scanf(" %c", &estado);

    if (estado == 's' || estado == 'S' || estado == 'V' || estado == 'v' || estado == 'U' || estado == 'u' || estado == 'C' || estado == 'c' || estado == 'D' || estado == 'd'){

    switch(estado){

        case 's':
        case 'S':
            printf("Estado: Solteiro \n");
        break;

        case 'c':
        case 'C':
            printf("Estado: Casado \n");
        break;

        case 'u':
        case 'U':
            printf("Estado: União \n");
        break;
        case 'd':
        case 'D':
            printf("Estado: Divorciado \n");
        break;

        case 'v':
        case 'V':
            printf("Estado: Viuvo \n");
        break;

    }
    } else {
        printf("Insira um estado válido!!! \n");
    }

    return 0;

}
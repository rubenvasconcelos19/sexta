#include <stdio.h>

int main(void){
    float bruto;
    float liquido;
    char nome[100];
    float taxa;
    char civ;


    
    printf("Insira o seu nome: ");
    scanf("%s", nome);
    printf("Insira o seu salário bruto: ");
    scanf("%f", &bruto);
    while (civ != 's' || civ != 'S' || civ != 'c' || civ != 'C') {
    printf("Insira o seu estado cívil(s/c)): ");
    scanf(" %c", &civ);
    if (civ != 's' || civ != 'S' || civ != 'c' || civ != 'C'){
        printf("Por favor re-insira o seu estado cívil. \n");
    }
    } 


    if ((civ == 's' || civ == 'S') && (bruto <= 750 )){
        taxa = 0.15;
    }
    if ((civ == 's' || civ == 'S') && (bruto < 750 )){
        taxa = 0.19;
    }
    if ((civ == 'c' || civ == 'C') && (bruto <= 850 )){
        taxa = 0.12;
    }
    if ((civ == 'c' || civ == 'C') && (bruto < 850 )){
        taxa = 0.16;
    }
    
    liquido = bruto - (bruto * taxa);

    printf(" Nome: %s; \n Estado Cívil: %c; \n Salário: %.2f; \n Taxa: %.2f; \n", nome, civ, liquido, taxa);

    return 0;

}
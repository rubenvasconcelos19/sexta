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
    printf("Insira o seu estado cívil(s,c,u,d): ");
    scanf(" %c", &civ);

    if (civ == 's' || civ == 'S'){
        taxa = 0.25;
    }else if(civ == 'c' || civ == 'C'){
        taxa = 0,22;
    }else if(civ == 'u' || civ == 'U'){
        taxa = 0.19;
    }else if(civ == 'd' || civ == 'D'){
        taxa = 0.18;
    }else{
        taxa = 0.09;
    }

    liquido = bruto - (bruto * taxa);

    printf(" --/-- \n Nome: %s \n Estado civil: %c \n Salário Bruto: %.2f€ \n IRS: %.2f \n Salário Líquido: %.2f€ \n ", nome, civ, bruto, taxa, liquido);

    return 0;

}
#include <stdio.h>

int main(void){
    float bruto;
    float liquido;
    char nome[100];
    float taxa;

    printf("Insira o seu nome: ");
    scanf("%s", nome);
    printf("Insira o seu salário bruto: ");
    scanf("%f", &bruto);

    if (bruto<1000){
        taxa = 0.05;
    }else if(bruto > 5000){
        taxa = 0.35;    
    }else{
        taxa = 0.11;
    }

    liquido = bruto - (bruto * taxa);

    printf("\nNome: %s\nBruto: %.2f\nTaxa: %.2f\nLíquido: %.2f\n\n", nome, bruto, taxa, liquido);
}

/*Crie um programa que calcule o salário bruto, impostos e salário líquido;
Regras:
<1000   0,5%
>=1000 <=5000   11%
>=5000  35%
Programa deve pedir:
Nome, Salário Bruto e apresentar impostos e salário líquido*/

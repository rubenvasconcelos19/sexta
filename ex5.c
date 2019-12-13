#include <stdio.h>

int main(void){

    char nome[100];
    int ano_nascimento;
    int ano_atual = 2019;
    int idade;

    printf(" Qual o seu nome? \n");
    scanf("%s", nome);
    printf(" Qual o seu ano de nascimento? \n");
    scanf(" %d", &ano_nascimento);

    idade = ano_atual - ano_nascimento;

    if(idade >= 10 && idade <=18){

    switch(idade){
        case 10:
        case 11:
        case 12:

        printf(" Nome: %s \n Idade: %d \n Equipas disponíveis: A, B \n", nome, idade);

        break;

        case 13:
        case 14:
        case 15:

        printf(" Nome: %s \n Idade: %d \n Equipas disponíveis: B, C \n", nome, idade);
        
        break;

        case 16:
        case 17:
        case 18:

        printf(" Nome: %s \n Idade: %d \n Equipas disponíveis: C, D \n", nome, idade);
        
        break;
    }
    } else {
        printf(" Nome: %s \n Idade: %d \n Equipas disponíveis: N/A \n Nenhuma equipa disponível para a sua idade. \n", nome, idade);
    }

    return 0;

}
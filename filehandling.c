#include <stdio.h>
#include <string.h>

int idade;
char nome[100];
int linha = 0;

int parametros(void){

    printf("Insira o seu nome: ");
    scanf(" %s", nome);
    printf("insira a sua idade: ");
    scanf(" %d", &idade);

}

int inserir(void){

    FILE *fp;

    linha++;

    fp = fopen("/home/ruben/Documents/sexta/file1", "w");

    parametros();

    fprintf(fp, "\t ID:%d,Nome:%sIdade:%d \n", linha, nome, idade);

    fclose(fp);

    inicio();

}

int ver(void){
    
    FILE *fp;

    char str1[100];

    fp = fopen("/home/ruben/Documents/sexta/file1", "r");

    fscanf(fp, " %s", str1);

    fclose(fp);

    printf("%s\n", str1);

    inicio();

}


int inicio(){

    int menu;

    printf(" 1 - Inserir \n 2 - Ver \n 3 - Sair \n");
    scanf(" %d", &menu);

    switch (menu)
    {
    case 1:

        inserir();

        break;

    case 2:
    
        ver();

        break;

    case 3:
        break;
    
    default:
        printf("Insira um valor válido \n");
        inicio();
        break;
    }
}

int main(){

    inicio();

    return 0;

}
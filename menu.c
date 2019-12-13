#include <stdio.h>

int main(void){
    
    printf(
        " \t 1- \tFormadores \n \t 2- \tAlunos \n \t 3- \tCursos \n \t 4- \tApoios \n \t 5- \tSair \n"
    );
    
    int menu;
    int quit;

    scanf("%d", &menu);

    if(menu > 5 || menu < 1){
        printf("Insira um valor válido.\n");
    }else if(menu == 1){
        printf("Menu Formadores Selecionado.\n");
    }else if(menu == 2){
        int idade;
        char nome[100];
        printf("Insira o nome.\n");
        scanf("%s", nome);
        printf("Insira a idade.\n");
        scanf(" %d", &idade);

        printf("Aluno %s tem %d anos \n", nome, idade);
    } else if(menu == 3){
        printf(" 1- \t Tis \n 2- \t TIIGR \n 3- \t GRSI \n");
        int menu3;
        scanf("%d", &menu3);
        if(menu3 == 1){
            printf("TIS\n");
        }else if(menu3 == 2){
            printf("TIIGR\n");
        } else if (menu3 == 3){
            printf("GRSI\n");
        }
    }else if(menu == 4){
        int soma;
        int num1;
        int num2;

        printf("Insira o primeiro número\n");
        scanf("%d", &num1);
        printf("Insira o próximo número\n");
        scanf(" %d", &num2);

        printf("A soma de  %d e %d é %d\n", num1, num2, num1+num2);

    }else{
        printf("Saindo...\n");
    }


    return 0;        
}
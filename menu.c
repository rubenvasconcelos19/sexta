#include <stdio.h>

#include <time.h>

void delay(int number_of_seconds) 
{ 

    int milli_seconds = 1000 * number_of_seconds; 
  
 
    clock_t start_time = clock(); 
  
  
    while (clock() < start_time + milli_seconds) 
        ; 
} 

int inicio(void){

    printf(
        " \n\t 1- \tFormadores \n \t 2- \tAlunos \n \t 3- \tCursos \n \t 4- \tApoios \n \t 5- \tSair \n"
    );
    

    int menu;

    scanf("%d", &menu);

    if(menu > 5 || menu < 1){

        printf("Insira um valor válido.\n");

        delay(1000);

        inicio();

    }else if(menu == 1){

        menu1();

    }else if(menu == 2){

        menu2();

    } else if(menu == 3){

        menu3();

    }else if(menu == 4){

        menu4();

    }else{

        printf("Saindo...\n");

    }
}

int menu1(void){

    printf("Menu Formadores Selecionado.\n");

    delay(3000);

    inicio();
}
int menu2(void){

    int idade;
        char nome[100];

        printf("Insira o nome.\n");
        scanf("%s", nome);
        printf("Insira a idade.\n");
        scanf(" %d", &idade);

        printf("Aluno %s tem %d anos \n", nome, idade);

    delay(3000);

    inicio();
}
int menu3(void){

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

        delay(3000);
        
        inicio();
}
int menu4(void){

        int soma;
        int num1;
        int num2;

        printf("Insira o primeiro número\n");
        scanf("%d", &num1);
        printf("Insira o próximo número\n");
        scanf(" %d", &num2);

        soma = num1 + num2;

    if(soma > 20 || soma < 0){
        printf("A soma é maior do que vinte ou menor do que 0\n");

        delay(1000);

        menu4();
    }else{

        printf("A soma de  %d e %d é %d\n", num1, num2, soma);
    }

    delay(3000);

    inicio();
}

int main(void){
    
    inicio();

    return 0;        
}
#include <stdio.h>

int escolhamenu;
int dias;
char seguro;
float total;
char categoria;
const float ilimitadosA = 27.5;
const float ilimitadosB = 32.5;
const float ilimitadosC = 37.5;
const float ilimitadosD = 40;
const float diariaA = 14;
const float diariakmA = 0.17;
const float diariaB = 17;
const float diariakmB = 0.2;
const float diariaC = 20;
const float diariakmC = 0.25;
const float diariaD = 22;
const float diariakmD = 0.3;
const float seguroA = 6.50;
const float seguroB = 7.50;
const float seguroC = 8.50;
const float seguroD = 10;
float diferenca;
float ckms;
float cdiaria100;
float cdiaria500;
float contrario;

int simulacao(){

    printf("Insira quantos dias pretende alugar o carro: ");
    scanf(" %d", &dias);

    printf("Pretende proteger o carro com um seguro? [S/N]: ");
    scanf(" %c", &seguro);

    printf("Insira a categoria de carro pretendida [A,B,C,D]: ");
    scanf(" %c", &categoria);

    switch (categoria){

        case 'A':
        case 'a':
            if(seguro == 's' || seguro == 'S'){
                ckms = dias * ilimitadosA + dias * seguroA;
                cdiaria100 = dias * diariaA + 100 * diariakmA + seguroA * dias;
                cdiaria500 =  dias * diariaA + 500 * diariakmA + seguroA * dias;
                contrario = (ckms - seguroA*dias - diariaA*dias)/diariakmA;
                printf(" Dias: %d, Seguro: Sim, Categoria: %c; \n Se for com Kms Ilimitados pagará: %.2f€ \n Por este preço pode fazer %.2f Kms com a outra tarifa. \n Se for com o Diário pagará %.2f€ para 100Km e %.2f€ para 500Km.\n",dias,categoria,ckms,contrario,cdiaria100,cdiaria500);
            }else if(seguro == 'n' || seguro == 'N'){
                printf(" Se for com Kms Ilimitados pagará: %.2f€ \n Se for com o Diário pagará %.2f€ para 100Km e %.2f€ para 500Km.\n", dias * ilimitadosA,  dias * diariaA + 100 * diariakmA, dias * diariaA + 200 * diariakmA);
            }else{
                printf("Insira um valor válido.");
                simulacao();
            }
        break;

        case 'B':
        case 'b':
            if(seguro == 's' || seguro == 'S'){
                printf(" Se for com Kms Ilimitados pagará: %.2f€ \n Se for com o Diário pagará %.2f€ para 100Km e %.2f€ para 500Km.\n", dias * ilimitadosB + dias * seguroB,  dias * diariaB + 100 * diariakmB + seguroB * dias, dias * diariaB + 200 * diariakmB + seguroB * dias);
            }else if(seguro == 'n' || seguro == 'N'){
                printf(" Se for com Kms Ilimitados pagará: %.2f€ \n Se for com o Diário pagará %.2f€ para 100Km e %.2f€ para 500Km.\n", dias * ilimitadosB,  dias * diariaB + 100 * diariakmB, dias * diariaB + 200 * diariakmB);
            }else{
                printf("Insira um valor válido.");
                simulacao();
            }
        break;

        case 'c':
        case 'C':
            if(seguro == 's' || seguro == 'S'){
                printf(" Se for com Kms Ilimitados pagará: %.2f€ \n Se for com o Diário pagará %.2f€ para 100Km e %.2f€ para 500Km.\n", dias * ilimitadosC + dias * seguroC,  dias * diariaC + 100 * diariakmC + seguroC * dias, dias * diariaC + 200 * diariakmC + seguroC * dias);
            }else if(seguro == 'n' || seguro == 'N'){
                printf(" Se for com Kms Ilimitados pagará: %.2f€ \n Se for com o Diário pagará %.2f€ para 100Km e %.2f€ para 500Km.\n", dias * ilimitadosC,  dias * diariaC + 100 * diariakmC, dias * diariaC + 200 * diariakmC);
            }else{
                printf("Insira um valor válido.");
                simulacao();
            }
        break;

        case 'd':
        case 'D':
            if(seguro == 's' || seguro == 'S'){
                printf(" Se for com Kms Ilimitados pagará: %.2f€ \n Se for com o Diário pagará %.2f€ para 100Km e %.2f€ para 500Km.\n", dias * ilimitadosD + dias * seguroD,  dias * diariaD + 100 * diariakmD + seguroD * dias, dias * diariaD + 200 * diariakmD + seguroD * dias);
            }else if(seguro == 'n' || seguro == 'N'){
                printf(" Se for com Kms Ilimitados pagará: %.2f€ \n Se for com o Diário pagará %.2f€ para 100Km e %.2f€ para 500Km.\n", dias * ilimitadosD,  dias * diariaD + 100 * diariakmD, dias * diariaD + 200 * diariakmD);
            }else{
                printf("Insira um valor válido.");
                simulacao();
            }
        break;

        default:
            printf("Insira um valor válido entre os 4.\n");
            simulacao();
        break;
    }

}

int ilimitados(){

}

int diaria(){

}


int menu(){

    printf(" Faça a escolha da sua tarifa, ou até faça uma simulação para saber qual sai mais barato.\n");
    printf(" 1- Kms Ilimitados; \n 2- Diária + Kms; \n 3- Simulação; \n 4- Sair; \n");
    scanf(" %d", &escolhamenu);

    switch (escolhamenu){

    case 1:
        ilimitados();
    break;

    case 2:
        diaria();
    break;

    case 3:
        simulacao();
    break;

    case 4:
        printf("Saindo... \n");
    break;
    
    default:
        printf("Escolha uma opção válida.\n");
        menu();
    break;

    }

}

int main(){

    menu();

}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Definindo variáveis
// |------------------|
int opcao;
float tc, tf, tk;
char reniciarPrograma;


// Chamando as funções
// |------------------|
void Kelvin_Celsius();
void Kelvin_Fahrenheit();
void Fahrenheit_Celsius();
void Fahrenheit_Kelvin();
void Celsius_Fahrenheit();
void Celsius_Kelvin();
void ClearScreen();

// Algoritmo principal
// |------------------|
void main(){

    // Setando o teclado
    // |----------------|
    setlocale(LC_ALL,"");

    // Saudações
    // |--------|
    printf("\n\t|·Bem-Vindo ao·|\n");
    PrintCtemp();

    do{
        // Menu de opções
        // |------------|
        printf("\nEscolha uma das opções abaixo:");
        printf("\n------------------------------");
        printf("\n1- Celsius para Fahrenheit");
        printf("\n2- Celsius para Kelvin");
        printf("\n3- Fahrenheit para Celsius");
        printf("\n4- Fahrenheit para Kelvin");
        printf("\n5- Kelvin para Celsius");
        printf("\n6- Kelvin para Fahrenheit");
        printf("\n------------------------------\n> ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                Celsius_Fahrenheit();
                break;
            case 2:
                Celsius_Kelvin();
                break;
            case 3:
                Fahrenheit_Celsius();
                break;
            case 4:
                Fahrenheit_Kelvin();
                break;
            case 5:
                Kelvin_Celsius();
                break;
            case 6:
                Kelvin_Fahrenheit();
                break;
            default:
                printf("Opção inválida!");
                break;
        }

        // Dando uma quebra
        printf("\n\nDeseja fazer outra conversão(S/N)? ");
        scanf(" %c", &reniciarPrograma);

        ClearScreen();
    }while(reniciarPrograma == 'S');

    printf("-----Fim do programa-----");
}

/*-----------------------------------------------------*/
void PrintCtemp(){
    printf("     ___  _                          \n");
    printf("    / __\\| |_  ___  _ __ ___   _ __  \n");
    printf("   / /   | __|/ _ \\| '_ ` _ \\ | '_ \\ \n");
    printf("  / /___ | |_|  __/| | | | | || |_) |\n");
    printf("  \\____/  \\__|\\___||_| |_| |_|| .__/ \n");
    printf("                              |_|    \n");
}

// Converter Kelvin para Fahrenheit
// |-------------------------------|
void Kelvin_Fahrenheit(){
    printf("\nDigite a temperatura em Kelvin: ");
    scanf("%f", &tk);
    tf = (((tk-273.15)*9)/5) + 32;
    printf("\nA temperatura em Fahrenheit é:%2.f", tf);
}

// Converter Kelvin para Celsius
// |----------------------------|
void Kelvin_Celsius(){
    printf("\nDigite a temperatura em Kelvin: ");
    scanf("%f",&tk);
    tc = tk-273.15;
    printf("\nA temperatura em Celsius é:%2.f", tc);
}

// Converter Fahrenheit para Kelvin
// |-------------------------------|
void Fahrenheit_Kelvin(){
    printf("\nDigite a temperatura em Fahrenheit: ");
    scanf("%f", &tf);
    tk = (((tf-32)*5)/9) + 273.15;
    printf("\nA temperatura em Kelvin é:%2.f", tk);
}

// Converter Fahrenheit para Celsius
// |--------------------------------|
void Fahrenheit_Celsius(){
    printf("\nDigite a temperatura em Fahrenheit: ");
    scanf("%f", &tf);
    tc = ((tf-32)*5)/9;
    printf("\nA temperatura em Celsius é:%2.f", tc);
}

// Converter Celsius para Kelvin
// |----------------------------|
void Celsius_Kelvin(){
    printf("\nDigite a temperatura em Celsius: ");
    scanf("%f", &tc);
    tk = tc+273.15;
    printf("\nA temperatura em Kelvin é:%2.f", tk);
}

// Converter Celsius para Fahrenheit
// |--------------------------------|
void Celsius_Fahrenheit(){
    printf("\nDigite a temperatura em Celsius: ");
    scanf("%f", &tc);
    tf = ((9*tc)/5)+32;
    printf("\nA temperatura em Fahrenheit é:%2.f", tf);
}

void ClearScreen(){
    printf("\x1B[2J\x1B[H");
}

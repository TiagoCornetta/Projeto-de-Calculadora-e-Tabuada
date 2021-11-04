#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>


//Operações Calculadora
void soma();
void subtracao();
void multiplicacao();
void divisao();

//Operação Tabuada
void tabuada();

//Menus
void menuOpcao();


void main() {
    
    int opcao = 0, operacao;
    float valor1;

     while(opcao != 1) {
        system("cls");
        printf("\nBem vindo ao menu inicial!\n");
        printf("\nEsse codigo permite:  \n");
        printf("-> Pegar a taboada em certo intervalo de um determinado valor.\n");
        printf("-> Fazer calculos matematicos.\n");
        printf("\nInstrucao:\n");
        printf("-> O numero digitado deve ter sua casa decimal separada por (.).\n");
        printf("(Como exemplo: 3,43 = 3.43)\n");
        printf("\nEstamos prontos?\n");
        printf("Digite 1 para continuar: ");
        scanf("%d",&opcao);
    }
    
    menuOpcao();

    

}

void menuOpcao(){
    system("cls");
    int opcao;
    do{
        printf("Qual opcao desejada?\n");
        printf("1 -> Tabuada de determinado Valor\n");
        printf("2 -> Soma entre dois valores\n");
        printf("3 -> Subtracao de dois valores\n");
        printf("4 -> Multiplicacao de dois valores\n");
        printf("5 -> Divisao de dois valores\n");
        printf("6 -> Para sair do programa\n");
        printf("Digite sua opcao: ");
        scanf("%d",&opcao);
        system("cls");
    }while (opcao < 1 || opcao > 6);

    switch (opcao)
    {
    
    case 1:
        tabuada();
        break;
        
    case 2:
        soma();
        break;
    
    case 3:
        subtracao();
        break;
    
    case 4:
        multiplicacao();
        break;
    
    case 5:
        divisao();
        break; 
    
    case 6:
        break;
    default:
        break;
    }
    
}



void menuSecundario(){
    int opcao = 0;
    while (opcao != 1 && opcao !=2)
    {
        printf("\nDeseja continuar no programa?");
        printf("\n1 -> Sim");
        printf("\n2 -> Nao");
        printf("\nDigite a opcao desejada: ");
        scanf("%d",&opcao);
        
    }
    
     
    switch (opcao)
    {
    case 1:
        menuOpcao();
        break;
    
    default:
        break;
    }
}



//Operações Calculadora
void soma() {
    float valor1, valor2, resultado;
    printf("MENU SOMA\n\n");

    //Pegar o primeiro valor
    printf("Digite o valor do primeiro numero: ");
    scanf("%f",&valor1);

    //Pegar o segundo valor
    printf("Digite o valor do segundo numero: ");
    scanf("%f",&valor2);

    resultado = valor2 + valor1;
    printf("Sua soma e de: %.2f",resultado);

    menuSecundario();

}

void subtracao(){
    float valor1, valor2, resultado;
    printf("MENU SUBTRACAO\n\n");

    //Pegar o primeiro valor
    printf("Digite o valor do primeiro numero: ");
    scanf("%f",&valor1);

    //Pegar o segundo valor
    printf("Digite o valor do segundo numero: ");
    scanf("%f",&valor2);

    resultado = valor2 - valor1;
    printf("Sua subtracao e de: %.2f",resultado);
    
    menuSecundario();
}

void multiplicacao(){
    float valor1, valor2, resultado;
    printf("MENU SUBTRACAO\n\n");

    //Pegar o primeiro valor
    printf("Digite o valor do primeiro numero: ");
    scanf("%f",&valor1);

    //Pegar o segundo valor
    printf("Digite o valor do segundo numero: ");
    scanf("%f",&valor2);

    resultado = valor2 * valor1;
    printf("Sua multiplicacao e de: %.2f",resultado);

    menuSecundario();

}

void divisao(){

    float valor1, valor2, resultado;
    printf("MENU Divisao\n\n");

    //Pegar o primeiro valor
    printf("Digite o valor do primeiro numero: ");
    scanf("%f",&valor1);

    //Pegar o segundo valor
    printf("Digite o valor do segundo numero: ");
    scanf("%f",&valor2);

    resultado = valor2 / valor1;
    printf("Sua divisao e de: %.2f",resultado);

    menuSecundario();


}

void tabuada()
{
    float valor, fim;

    printf("MENU TABUADA\n\n");

    printf("Qual valor deseja para tabuada?\n");
    printf("Digite o valor: ");
    scanf("%f",&valor);
    
    printf("Ate onde gostaria que ela mostrasse?\n");
    printf("Digite um valor inteiro: ");
    scanf("%f",&fim);
    

    system("cls");
    printf("TABUADA DO %.2f\n\n",valor);
    for(float i = 1; i <=fim; i++){
        printf("%.2f * %.2f = %.2f\n",valor, i, valor * i);
    }   

    menuSecundario();


}
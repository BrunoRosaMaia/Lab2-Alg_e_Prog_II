#include <stdio.h>

int main(){
    float peso, altura, imc;

    printf("Qual é o seu peso (em quilogramas): ");
    scanf("%f", &peso);

    printf("Qual é a sua altura (em metros): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("O IMC de uma pessoa com peso %.2f kg e altura %.2f m é igual a %.2f.", peso, altura, imc);

    return 0;
}
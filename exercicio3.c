#include <stdio.h>

void exibirSituacaoAcademica(float media, int freq){
    if(freq < 75){
        printf("Reprovado por falta.\n");
    }

    else if(freq >= 75 && media >= 7.5){
        printf("Aprovado.\n");
    }

    else if(freq >= 75 && media < 7.5){
        printf("Você está de exame.\n");
    }
}

int main(){
    int freq;
    float media;

    printf("Qual é a sua frequência: ");
    scanf("%d", &freq);

    printf("Qual é a sua média: ");
    scanf("%f", &media);

    exibirSituacaoAcademica(media, freq);

    return 0;
}
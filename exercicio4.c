#include <stdio.h>

int verificarTriangulo(float a, float b, float c){
    if(a < b + c && b < a + c && c < a + b){
        return 1;
    }

    else{
        return 0;
    }
}

void apresentarResultado(int existe){
    if(existe){
        printf("O triângulo existe.\n");
    }
    else{
        printf("O triângulo não existe.\n");
    }
}

int main(){
    float a, b, c;
    int existe;

    printf("Lado A: ");
    scanf("%f", &a);

    printf("Lado B: ");
    scanf("%f", &b);

    printf("Lado C: ");
    scanf("%f", &c);

    existe = verificarTriangulo(a, b, c);

    apresentarResultado(existe);

    return 0;
}
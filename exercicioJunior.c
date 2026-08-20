#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sortearNum(){
    int numeroSort;

    srand(time(NULL));

    numeroSort = (rand() % 100) + 1;

    return numeroSort;
}

void sorteio(int palpite, int numSort){
    
}
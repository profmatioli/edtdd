#include "funcoes.h"

int somaInt(int a, int b){
    return a+b;
}

float mediaVetorInt(int *v, int n)
{
    float media=0.0;
    int i;
    for(i=0; i<n; i++){
        media+=v[i];
    }
    return media/i;
}

int maiorVetorInt(int *v, int n)
{
    int maior = v[0];
    int i;
    for(i=1; i<n; i++){
        maior = v[i]>maior?v[i]:maior;
    }
    return maior;
}

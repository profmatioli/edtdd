#include "funcoes.h"

//imolementa��o da fun��o ex01

//imolementa��o da fun��o ex02

//imolementa��o da fun��o ex03

//imolementa��o da fun��o ex04

//imolementa��o da fun��o ex05

//imolementa��o da fun��o ex06

//imolementa��o da fun��o ex07

//imolementa��o da fun��o ex08

//imolementa��o da fun��o ex09

//imolementa��o da fun��o ex10

//imolementa��o da fun��o ex11

//imolementa��o da fun��o ex12

//imolementa��o da fun��o ex13

//imolementa��o da fun��o ex14

//imolementa��o da fun��o ex15

//imolementa��o da fun��o ex16

//imolementa��o da fun��o ex17

//imolementa��o da fun��o ex18

//imolementa��o da fun��o ex19



//**********************************************************************
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

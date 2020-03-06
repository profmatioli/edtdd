#include "funcoes.h"

//imolementação da função ex01

//imolementação da função ex02

//imolementação da função ex03

//imolementação da função ex04

//imolementação da função ex05

//imolementação da função ex06

//imolementação da função ex07

//imolementação da função ex08

//imolementação da função ex09

//imolementação da função ex10

//imolementação da função ex11

//imolementação da função ex12

//imolementação da função ex13

//imolementação da função ex14

//imolementação da função ex15

//imolementação da função ex16

//imolementação da função ex17

//imolementação da função ex18

//imolementação da função ex19



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

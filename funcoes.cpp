#include <math.h>
#include "funcoes.h"

//implementação da função ex01

//implementação da função ex02

//implementação da função ex03

int ex03(int a)
{
    int divs = 0;

    // Verifica se é primo
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0) divs++;
    }

    // Verifica o número de divisões
    if (divs == 2) return 1;
    else return 0;
}

//implementação da função ex04

//implementação da função ex05

//implementação da função ex06

//implementação da função ex07

//implementação da função ex08

//implementação da função ex09

//implementação da função ex10

//implementação da função ex11

//implementação da função ex12

//implementação da função ex13

//implementação da função ex14

//implementação da função ex15

//implementação da função ex16

//implementação da função ex17

//implementação da função ex18

void ex18(float p1, int * p2, float * p3){
    * p2 = p1;
    * p3 = p1 - * p2;
}
//implementação da função ex19

//implementação da função ex20



//**********************************************************************
int somaInt(int a, int b){
    return a+b;
}

bool cmpf(float A, float B)
{
    return (fabs(A - B) < 0.0001f);
}

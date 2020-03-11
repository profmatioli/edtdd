#include <math.h>
#include "funcoes.h"

//implementação da função ex01

//implementação da função ex02

//implementação da função ex03

//implementação da função ex04

//implementação da função ex05

//implementação da função ex06

float ex06(int p1, int p2, int p3, int p4){
return (float((p1 * p3)+(p2 * p4))/(p3+p4));
}

//implementação da função ex07

//implementação da função ex08

//implementação da função ex09

//implementação da função ex10

//implementação da função ex11

//implementação da função ex12

//implementação da função ex13

//implementação da função ex14
float ex14 (float p1, char p2)
{
    float result;
    if (p2 == 'M')
    {
        result = ((72.7*p1) - 58);
    }

    if (p2 =='F')
    {
       result = 62.1*p1 - 58;
    }
    return result;
}

//implementação da função ex15

//implementação da função ex16

//implementação da função ex17

//implementação da função ex18

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

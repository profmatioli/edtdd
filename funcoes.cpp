#include <math.h>
#include "funcoes.h"

//implementa��o da fun��o ex01

//implementa��o da fun��o ex02

//implementa��o da fun��o ex03

//implementa��o da fun��o ex04

//implementa��o da fun��o ex05

//implementa��o da fun��o ex06

float ex06(int p1, int p2, int p3, int p4){
return (float((p1 * p3)+(p2 * p4))/(p3+p4));
}

//implementa��o da fun��o ex07

//implementa��o da fun��o ex08

//implementa��o da fun��o ex09

//implementa��o da fun��o ex10

//implementa��o da fun��o ex11

//implementa��o da fun��o ex12

//implementa��o da fun��o ex13

//implementa��o da fun��o ex14
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

//implementa��o da fun��o ex15

//implementa��o da fun��o ex16

//implementa��o da fun��o ex17

//implementa��o da fun��o ex18

//implementa��o da fun��o ex19

//implementa��o da fun��o ex20



//**********************************************************************
int somaInt(int a, int b){
    return a+b;
}

bool cmpf(float A, float B)
{
    return (fabs(A - B) < 0.0001f);
}

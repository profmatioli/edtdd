#include <math.h>
#include "funcoes.h"

//implementa��o da fun��o ex01

//implementa��o da fun��o ex02

//implementa��o da fun��o ex03

int ex03(int a)
{
    int divs = 0;

    // Verifica se � primo
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0) divs++;
    }

    // Verifica o n�mero de divis�es
    if (divs == 2) return 1;
    else return 0;
}

//implementa��o da fun��o ex04

//implementa��o da fun��o ex05

//implementa��o da fun��o ex06

//implementa��o da fun��o ex07

//implementa��o da fun��o ex08

//implementa��o da fun��o ex09

//implementa��o da fun��o ex10

//implementa��o da fun��o ex11

//implementa��o da fun��o ex12

//implementa��o da fun��o ex13

//implementa��o da fun��o ex14

//implementa��o da fun��o ex15

//implementa��o da fun��o ex16

//implementa��o da fun��o ex17

//implementa��o da fun��o ex18

void ex18(float p1, int * p2, float * p3){
    * p2 = p1;
    * p3 = p1 - * p2;
}
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

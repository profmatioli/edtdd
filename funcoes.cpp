#include <math.h>
#include "funcoes.h"

//implementa��o da fun��o ex01

//implementa��o da fun��o ex02

//implementa��o da fun��o ex03

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

float ex07(int p1)
{
    float n=6;
    p1 = n*0.5;
    return p1;

    }

    void ex13(float p1, float p2, float p3, float *p4, float *p5)
    {
        p1=1;
        p2=2;
        p2=-15;
        p4=0;
        p5=0;
        float delta;

        delta = (p2*p2)-(4*p1*p3);
        delta = sqrt(delta);
        p4 = (-p2+ delta)/(2*p1);
        p5 = (-p2- delta)/(2*p1);

        return (p4, p5);

    }

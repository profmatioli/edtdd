#include <math.h>
#include "funcoes.h"

//implementação da função ex01

//implementação da função ex02

//implementação da função ex03

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

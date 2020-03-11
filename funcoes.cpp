#include <math.h>
#include "funcoes.h"

//implementação da função ex01

//implementação da função ex02

//implementação da função ex03

//implementação da função ex04

//implementação da função ex05!
float ex05(int a){
    int soma=0;
    int i=1;
    int b = 0;
    do{

        soma++;
        b += i;
        i+=2;
    }while(b!=a);
    return soma;

}

//implementação da função ex06

//implementação da função ex07

//implementação da função ex08

//implementação da função ex09
int ex09(int a){
    int div =0;
    for(int i=1;i<a;i++){
        if(a%i==0){
            div+=i;
        }
    }
    if(div == a){
        return 1;
    }
    else return 0;

}


//implementação da função ex10

//implementação da função ex11
float ex11(float r){
    float a = 0;
    a= (r*r)*3.14;
    return a;
}
//implementação da função ex12

//implementação da função ex13

//implementação da função ex14

//implementação da função ex15
int ex15(int c){
    int f=0;
    if (c%2==0){
        f=0;
    }
    else{
        f=1;
    }
    return f;
}

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

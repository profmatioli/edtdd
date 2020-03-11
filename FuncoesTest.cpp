#include <iostream>
#include "UnitTest++.h"
#include "funcoes.h"

namespace std
{
/*
    TEST(ex01)
    {
        CHECK_EQUAL(2, ex01(1,10,4));
    }
    TEST(ex02)
    {
        CHECK_EQUAL(0, ex02(32));
    }
    TEST(ex03)
    {
        CHECK_EQUAL(1, ex03(7));
        CHECK_EQUAL(0, ex03(10));
    }
    TEST(ex04)
    {
        CHECK_EQUAL(75,ex04(10,15));
    }
    TEST(ex05)
    {
        CHECK_EQUAL(7, ex05(49));
    }
    TEST(ex06)
    {
        CHECK_EQUAL(7.8, ex06(7,9,6,4));
    }
*/    TEST(ex07)
    {
        CHECK_EQUAL(3,ex07(6));
    }/*
    TEST(ex08)
    {
        CHECK_EQUAL(64,ex08(8,8));
    }
    TEST(ex09)
    {
        CHECK_EQUAL(1, ex09(8128));
    }
    TEST(ex10)
    {
        CHECK_EQUAL(75, ex10(30,5000));
    }
    TEST (ex11)
    {
        const float result = ex11(5.25);
        CHECK_EQUAL(true, cmpf(86.5462,result));
    }
    TEST(ex12)
    {
        const int prxPrimo = ex12(471);
        CHECK_EQUAL(479,prxPrimo);
    }
    */
    TEST(ex13)
    {
        float p4, p5;
        p4=p5=0.0;
        ex13(1,2,-15,&p4, &p5);
        CHECK_EQUAL(3,p4);
        CHECK_EQUAL(-5,p5);
    }
/*   TEST(ex14)
    {
        const float result = ex14(1.87,'M');
        CHECK_EQUAL(1,cmpf(77.949,result));
    }
    TEST(ex15)
    {
        const int result = ex15(5);
        CHECK_EQUAL(1,result);
    }
    TEST(ex16)
    {
        const float result = ex16(6);
        CHECK_EQUAL(1,cmpf(2.4500,result));
    }
    TEST(ex17)
    {
        const float res1 = ex17(5,2,'/');
        CHECK_EQUAL(1,cmpf(2.5,res1));
       const float res2 = ex17(5,2,'*');
        CHECK_EQUAL(1,cmpf(10,res2));
       const float res3 = ex17(5,2,'+');
        CHECK_EQUAL(1,cmpf(7,res3));
       const float res4 = ex17(5,2,'-');
        CHECK_EQUAL(1,cmpf(3,res4));
    }
    TEST(ex18)
    {
        int p2=0;
        float p3=0.0;
        ex18(13.33,&p2,&p3);
        CHECK_EQUAL(13,p2);
        CHECK_EQUAL(1,cmpf(0.33,p3));
    }
   TEST(ex19)
    {
        float dias=0.0;
        dias=ex19(100000,186400);
        CHECK_EQUAL(1,cmpf(1.0,dias));
    }
    TEST(ex20)
    {
        const int result = ex20(2015);
        CHECK_EQUAL(8,result);
    }
*/
}

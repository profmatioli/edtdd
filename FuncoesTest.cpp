#include <iostream>
#include "UnitTest++.h"
#include "funcoes.h"

namespace std
{
    TEST(SomaIntTest)
    {
        const int Result = somaInt(1,1);
        CHECK_EQUAL(2, Result);
    }
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
    TEST(ex07)
    {
        CHECK_EQUAL(3,ex07(6));
    }
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
*/


}

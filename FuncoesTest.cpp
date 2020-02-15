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

    TEST(VetorTest)
    {
        int v[5] = {1,2,3,4,5};
        const float Result = mediaVetorInt(v,5);
        CHECK_EQUAL(3,Result);
        CHECK_EQUAL(2.5,Result);
        const int Result2 = maiorVetorInt(v,5);
        CHECK_EQUAL(5,Result2);
    }

}

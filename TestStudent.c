#include <string.h>
#include "CuTest.h"
#include "../Student.c"

    /**
     * Realiza la prueba unitaria del método StrToUpper(input)
     * @param tc
     */
    void TestStrToUpper(CuTest *tc) {
        char* input = strdup("hello world");
        char* actual = StrToUpper(input);
        char* expected = "HELLO WORLD";
        CuAssertStrEquals(tc, expected, actual);
    }

    /**
    * Agregar el método a testear
    * @return suite;
    */
    CuSuite* StrUtilGetSuite() {
        CuSuite* suite = CuSuiteNew();
        SUITE_ADD_TEST(suite, TestStrToUpper);
        return suite;
    }


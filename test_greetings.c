//#include "Unity/src/unity.h"
//#include <unity.h>
//#include "Unity/src/unity.h"
#include "greetings.h"
#include "Unity/src/unity.h"

void setUp(void) {
    // set stuff up here
}

void tearDown(void) {
    // clean stuff up here
}

void test_greetings_should_ReturnHelloWorld(void)
{
    TEST_ASSERT_EQUAL_STRING("Hello, World!", getHello());
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_greetings_should_ReturnHelloWorld);
    return UNITY_END();
}
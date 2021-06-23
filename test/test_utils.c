#include "../utils.h"
#include "../Unity/src/unity.h"

void setUp(void) {
    // set stuff up here
}

void tearDown(void) {
    // clean stuff up here
}

void test_HashOfEmptyString_should_BeZero(void)
{
    TEST_ASSERT_EQUAL_INT(0, hash(""));
}

void test_HashOfSingleChar_should_ReturnCharCode(void)
{
    TEST_ASSERT_EQUAL_INT(65, hash("A"));
}

void test_HashOfString_should_NotBeGreaterThanLIMIT(void)
{
    TEST_ASSERT_LESS_THAN_INT(LIMIT, hash("ABCDEF"));
}

void test_HashOfString_should_NotBeNegative(void)
{
    TEST_ASSERT_GREATER_OR_EQUAL(0, hash("Some string"));
}

void test_Note_should_IncrementConcordance(void)
{
    TEST_ASSERT_EQUAL_INT(0, countFor("Some string"));
    note("Some string");
    TEST_ASSERT_EQUAL_INT(1, countFor("Some string"));
    note("Some string");
    note("Some string");
    note("Some string");
    note("Some string");
    note("Some string2");
    TEST_ASSERT_EQUAL_INT(5, countFor("Some string"));
    TEST_ASSERT_EQUAL_INT(1, countFor("Some string2"));
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_HashOfEmptyString_should_BeZero);
    RUN_TEST(test_HashOfSingleChar_should_ReturnCharCode);
    RUN_TEST(test_HashOfString_should_NotBeGreaterThanLIMIT);
    RUN_TEST(test_HashOfString_should_NotBeNegative);
    RUN_TEST(test_Note_should_IncrementConcordance);
    return UNITY_END();
}
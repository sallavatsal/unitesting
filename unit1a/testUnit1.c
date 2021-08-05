
#include "unity.h"

void test_TheFirst(void)
{
    TEST_ASSERT_EQUAL_INT32(-1, 0xFFFFFFFF );
}

void test_TheSecond(void)
{
    TEST_ASSERT_FALSE(8>7.9);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_TheFirst);
    RUN_TEST(test_TheSecond);
    return UNITY_END();
}
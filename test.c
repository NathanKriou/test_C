// #include "unity.h"
#include "fonction.h"

// Fonction d'initialisation avant chaque test
void setUp(void) {
}

// Fonction de nettoyage après chaque test
void tearDown(void) {
}

// Test de la fonction addition
void test_addition(void) {
    TEST_ASSERT_EQUAL(8, addition(5, 3));
    TEST_ASSERT_EQUAL(0, addition(-1, 1));
}

// Test de la fonction soustraction
void test_soustraction(void) {
    TEST_ASSERT_EQUAL(2, soustraction(5, 3));
    TEST_ASSERT_EQUAL(-2, soustraction(-1, 1));
}

// Fonction principale des tests
int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_addition);
    RUN_TEST(test_soustraction);
    return UNITY_END();
}

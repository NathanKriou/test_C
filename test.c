#include "/Users/nathan/Documents/École/ESGI/S1/devops:css/test_C/Unity/src/unity.h"  // Chemin relatif vers unity.h
#include "fonction.h"


// Fonction pour initialiser les tests
void setUp(void) {
    // Code d'initialisation si nécessaire
}

// Fonction pour nettoyer après les tests
void tearDown(void) {
    // Code de nettoyage si nécessaire
}

// Test de la fonction addition
void test_addition(void) {
    TEST_ASSERT_EQUAL(8, addition(5, 3));
    TEST_ASSERT_EQUAL(0, addition(-2, 2));
}

// Test de la fonction soustraction
void test_soustraction(void) {
    TEST_ASSERT_EQUAL(2, soustraction(5, 3));
    TEST_ASSERT_EQUAL(-4, soustraction(-2, 2));
}

// Fonction principale de test
int main(void) {
    UNITY_BEGIN(); // Démarre Unity
    RUN_TEST(test_addition); // Exécute le test d'addition
    RUN_TEST(test_soustraction); // Exécute le test de soustraction
    return UNITY_END(); // Termine les tests
}

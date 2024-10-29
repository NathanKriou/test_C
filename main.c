#include <stdio.h>
#include "fonction.h"

int main() {
    int a = 5, b = 3;

    printf("Addition de %d et %d = %d\n", a, b, addition(a, b));
    printf("Soustraction de %d et %d = %d\n", a, b, soustraction(a, b));

    return 0;
}

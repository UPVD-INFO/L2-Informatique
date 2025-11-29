#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));  // Semilla aleatoria

    for (int i = 0; i < 5; i++) {
        int n = rand() % 100 + 1;  // Número entre 1 y 100
        printf("%d\n", n);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int power = 1;

    while (power <= 512) {
        printf("%d\n", power);
        power *= 2;  
    }

    return 0;
}
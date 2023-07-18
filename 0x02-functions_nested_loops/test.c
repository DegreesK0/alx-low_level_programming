#include <stdio.h>

void printFibonacci(int n) {
    int a = 1;
    int b = 2;
    int i;

    printf("%d, %d, ", a, b);

    for (i = 3; i <= n; i++) {
        int c = a + b;
        printf("%d", c);

        if (i != n) {
            printf(", ");
        }

        a = b;
        b = c;
    }
    
    printf("\n");
}

int main() {
    printFibonacci(98);
    return 0;
}

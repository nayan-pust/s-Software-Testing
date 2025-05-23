#include <stdio.h>

int main() {
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);

    int a, b;

    while (scanf("%d %d", &a, &b) == 2) {
        printf("Sum of %d and %d is %d\n", a, b, a + b);
        printf("Subtraction of %d and %d is %d\n", a, b, a - b);
        printf("Multiplication of %d and %d is %d\n", a, b, a * b);
        if (b != 0)
            printf("Division of %d and %d is %.2f\n", a, b, (float)a / b);
        else
            printf("Division of %d and %d is undefined (division by zero)\n", a, b);

        printf("------------------------\n");
    }

    return 0;
}

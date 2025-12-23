#include <stdio.h>

int subtract(int a, int b) {
    return a + (~b + 1);  // Two's complement of b
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Result = %d\n", subtract(x, y));
    return 0;
}

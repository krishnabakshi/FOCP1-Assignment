#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nOriginal: a=%d, b=%d\n", a, b);

    
    temp = a;
    a = b;
    b = temp;
    printf("1. Using temp: a=%d, b=%d\n", a, b);

    
    a = a + b;
    b = a - b;
    a = a - b;
    printf("2. Using arithmetic: a=%d, b=%d\n", a, b);

  
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("3. Using XOR: a=%d, b=%d\n", a, b);

    
    int *p = &a;
    int *q = &b;
    temp = *p;
    *p = *q;
    *q = temp;
    printf("4. Using pointers: a=%d, b=%d\n", a, b);

    return 0;
}

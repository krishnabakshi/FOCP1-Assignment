#include <stdio.h>
#include <math.h>

int binaryToDecimal(long long bin) {
    int dec = 0, base = 1, rem;
    while (bin > 0) {
        rem = bin % 10;
        dec += rem * base;
        base *= 2;
        bin /= 10;
    }
    return dec;
}

long long decimalToBinary(int dec) {
    long long bin = 0;
    long long place = 1;
    while (dec > 0) {
        int rem = dec % 2;
        bin += rem * place;
        place *= 10;
        dec /= 2;
    }
    return bin;
}

int main() {
    int choice;
    printf("1. Binary → Decimal\n2. Decimal → Binary\nEnter choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
        long long b;
        printf("Enter binary number: ");
        scanf("%lld", &b);
        printf("Decimal = %d\n", binaryToDecimal(b));
    }
    else if(choice == 2) {
        int d;
        printf("Enter decimal number: ");
        scanf("%d", &d);
        printf("Binary = %lld\n", decimalToBinary(d));
    }
    else {
        printf("Invalid choice\n");
    }

    return 0;
}

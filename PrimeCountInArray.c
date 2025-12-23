#include <stdio.h>

int isPrime(int num) {
    int i;
    if(num <= 1) return 0;
    for(i = 2; i * i <= num; i++) {
        if(num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int arr[] = {2, 4, 5, 7, 9, 11};
    int n = 6, i, count = 0;

    for(i = 0; i < n; i++) {
        if(isPrime(arr[i]))
            count++;
    }

    printf("Number of prime elements = %d\n", count);
    return 0;
}

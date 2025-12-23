#include <stdio.h>

int main() {
    int arr[] = {12, 7, 9, 4, 6, 5};
    int even[10], odd[10];
    int i, e = 0, o = 0, n = 6;

    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            even[e++] = arr[i];
        else
            odd[o++] = arr[i];
    }

    printf("Even Array: ");
    for(i = 0; i < e; i++)
        printf("%d ", even[i]);

    printf("\nOdd Array: ");
    for(i = 0; i < o; i++)
        printf("%d ", odd[i]);

    return 0;
}

#include <stdio.h>

int main() {
    int arr[] = {85, 92, 99, 76, 99, 88};
    int n = 6, i, found = -1;

    for(i = 0; i < n; i++) {
        if(arr[i] == 99) {
            found = i;
            break;
        }
    }

    if(found != -1)
        printf("First occurrence of 99 at index %d\n", found);
    else
        printf("99 not found\n");

    return 0;
}

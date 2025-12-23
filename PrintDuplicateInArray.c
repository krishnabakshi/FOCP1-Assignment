#include <stdio.h>

int main() {
    int arr[] = {2, 10, 10, 100, 2, 10, 11, 2, 11, 2};
    int n = 10;
    int i, j, count;
    int found = 0;

    printf("Duplicate elements: ");

    for(i = 0; i < n; i++) {
        count = 0;

        for(j = 0; j < i; j++) {
            if(arr[i] == arr[j])
                break;
        }

        if(j != i)
            continue;

        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j])
                count++;
        }

        if(count > 0) {
            printf("%d ", arr[i]);
            found = 1;
        }
    }

    if(found == 0)
        printf("-1");

    return 0;
}

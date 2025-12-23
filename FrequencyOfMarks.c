#include <stdio.h>

int main() {
    int marks[] = {99, 85, 99, 76, 88, 99};
    int n = 6, i, count = 0;

    printf("Students who scored 99:\n");

    for(i = 0; i < n; i++) {
        if(marks[i] == 99) {
            printf("Student %d\n", i + 1);
            count++;
        }
    }

    printf("Total students scored 99: %d\n", count);
    return 0;
}

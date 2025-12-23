#include <stdio.h>

int main() {
    int x, y;
    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);

    if(x > 0 && y > 0)
        printf("Point lies in Quadrant I\n");
    else if(x < 0 && y > 0)
        printf("Point lies in Quadrant II\n");
    else if(x < 0 && y < 0)
        printf("Point lies in Quadrant III\n");
    else if(x > 0 && y < 0)
        printf("Point lies in Quadrant IV\n");
    else if(x == 0 && y == 0)
        printf("Point lies at Origin\n");
    else if(x == 0)
        printf("Point lies on Y-axis\n");
    else
        printf("Point lies on X-axis\n");

    return 0;
}

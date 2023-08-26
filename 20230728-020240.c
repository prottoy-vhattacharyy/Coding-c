#include <stdio.h>
#include <math.h>

#define PI 3.14159265359

void drawCircle(int radius) {
    int diameter = 2 * radius;
    int center = radius;

    for (int y = 0; y <= diameter; y++) {
        for (int x = 0; x <= diameter; x++) {
            int distance = (int)sqrt((x - center) * (x - center) + (y - center) * (y - center));
            if (distance == radius) {
                printf("**");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main() {
    int radius=10;
    drawCircle(radius);

    return 0;
}
    
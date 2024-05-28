#include <stdio.h>
#include <graphics.h>
#include <math.h>
void circle(int xc, int yc, int x, int y) {
    putpixel(xc+x, yc+y, WHITE);
    putpixel(xc-x, yc+y, WHITE);
    putpixel(xc+x, yc-y, WHITE);
    putpixel(xc-x, yc-y, WHITE);
    putpixel(xc+y, yc+x, WHITE);
    putpixel(xc-y, yc+x, WHITE);
    putpixel(xc+y, yc-x, WHITE);
    putpixel(xc-y, yc-x, WHITE);
}
void midpointCircle(int xc, int yc, int r) {
    int x = 0, y = r;
    int p = 1 - r;

    circle(xc, yc, x, y);

    while (x < y) {
        x++;
        if (p < 0)
            p += 2 * x + 1;
        else {
            y--;
            p += 2 * (x - y) + 1;
        }
        circle(xc, yc, x, y);
    }
}
int main() {
    int gd = DETECT, gm;
    int xc, yc, r;
    printf("center of the circle (x y): ");
    scanf("%d %d", &xc, &yc);
    printf("radius of the circle: ");
    scanf("%d", &r);
    initgraph(&gd, &gm, NULL);
    midpointCircle(xc, yc, r);
    delay(300000);
    closegraph();
    return 0;
}


#include <iostream>
#include <graphics.h>
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int X1, Y1, X2, Y2, tx, ty;
    std::cout << "starting points (X1, Y1): ";
    std::cin >> X1 >> Y1;
    std::cout << "ending points (X2, Y2): ";
    std::cin >> X2 >> Y2;
    std::cout << "translation distance (tx, ty): ";
    std::cin >> tx >> ty;
    X1 += tx;
    Y1 += ty;
    X2 += tx;
    Y2 += ty;
    line(X1, Y1, X2, Y2);
    delay(300000);
    closegraph();
    return 0;
}


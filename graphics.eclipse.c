//WAP to draw a eclipse using graphics.
#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");              // Initialize graphics mode
    ellipse(250, 200, 0, 360, 100, 50);   // Draw ellipse: center (250,200), start angle 0, end angle 360, x-radius 100, y-radius 50
    getch();                               // Wait for a key press
    closegraph();                          // Close graphics window

    return 0;
}

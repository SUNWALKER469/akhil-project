//WAP to draw a circle using graphics.
#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");       // Initialize graphics mode
    circle(250, 200, 50);           // Draw circle at (250,200) with radius 50
    getch();                        // Wait for a key press
    closegraph();                   // Close graphics window

    return 0;
}

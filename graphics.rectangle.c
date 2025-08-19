//WAP to draw a rectangle using graphics.
#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");           // Initialize graphics mode
    rectangle(100, 100, 300, 200);     // Draw rectangle: top-left (100,100), bottom-right (400,300)
    getch();                            // Wait for a key press
    closegraph();                       // Close graphics window

    return 0;
}
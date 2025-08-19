//WAP to draw a line using graphics.
#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");       // Initialize graphics mode
    line(50, 50, 400, 50);         // Draw a straight horizontal line
    getch();                        // Wait for key press
    closegraph();                   // Close graphics window

    return 0;
}

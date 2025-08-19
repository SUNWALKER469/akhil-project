WAP to draw a circle with a text written in it using graphics.
#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");           // Initialize graphics mode

    // Draw a circle at center (250,200) with radius 100
    circle(250, 200, 150);

    // Set text style: font, direction, size
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);

    // Write text roughly centered inside the circle
    outtextxy(150, 150, "Akhil Hamal");

    getch();                            // Wait for a key press
    closegraph();                       // Close graphics window

    return 0;
}

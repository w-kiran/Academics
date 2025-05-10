#include <graphics.h>
#include <conio.h>

int main() {
    printf("Kiran Joshi Sukubhattu\n");

    int gd = DETECT, gm, i = 10;
    initgraph(&gd, &gm, "");

    while (!kbhit()) {  // Continue animation until a key is pressed
        cleardevice();
        setcolor(WHITE);

        // Draw the moving object
        ellipse(100 + i, 200, 0, 360, 50, 16);
        line(130 + i, 185, 110 + i, 155);
        line(110 + i, 155, 60 + i, 155);
        line(60 + i, 155, 80 + i, 185);
        line(80 + i, 215, 60 + i, 245);
        line(60 + i, 245, 110 + i, 245);
        line(110 + i, 245, 130 + i, 215);

        delay(10);

        // If the object moves beyond the screen width, reset position
        if (i > getmaxx()) {
            i = -150;  // Reset from the left side
        } else {
            i += 5;  // Move the object to the right
        }
    }

    closegraph();
    return 0;
}


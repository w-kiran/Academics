#include <graphics.h>
#include <conio.h>

void draw_moving_car(void) {
    int i = 0, gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    while (!kbhit()) {  // Keep running until a key is pressed
        cleardevice();  // Clear the screen

        // Set color of car as white
        setcolor(WHITE);

        // Body of car
        line(0 + i, 300, 210 + i, 300);
        line(50 + i, 300, 75 + i, 270);
        line(75 + i, 270, 150 + i, 270);
        line(150 + i, 270, 165 + i, 300);
        line(0 + i, 300, 0 + i, 330);
        line(210 + i, 300, 210 + i, 330);

        // Wheels
        circle(65 + i, 330, 15);
        circle(65 + i, 330, 2);
        circle(145 + i, 330, 15);
        circle(145 + i, 330, 2);

        // Bottom lines
        line(0 + i, 330, 50 + i, 330);
        line(80 + i, 330, 130 + i, 330);
        line(210 + i, 330, 160 + i, 330);

        delay(100);

        // If car moves out of screen width, reset position
        if (i > getmaxx()) {
            i = -210;  // Reset position from the left
        } else {
            i += 10;  // Move the car to the right
        }
    }

    closegraph();
}

int main() {
    printf("Kiran Joshi Sukubhattu\n");
    draw_moving_car();
    return 0;
}


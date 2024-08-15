// prompts hte user to enter radius of a circle and displays hte circle area and circumference
#include <stdio.h>
int main()
{
    printf("\n\n'Output of Question No. 4'\n\n");
    float r, area, circ;
    printf("Enter a radius of a circle = ");
    scanf("%f", &r);
    area = (22 / 7) * r * r;
    circ = 2 * (22 / 7) * r;
    printf("\n\nArea of circle = %.2f and Circumference of circle = %.2f\n\n\n", area, circ);

    return 0;
}
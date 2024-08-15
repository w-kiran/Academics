// prompts the user to enter temper in celsius and displahyh in farin
#include <stdio.h>
int main()
{
    printf("\n\n'Output of Question No. 3'\n\n");
    float temp, faren;
    printf("Enter a temperature in Celsius = ");
    scanf("%f", &temp);
    faren = ((9 * temp) / 5) + 32;
    printf("\n\nTemperature in Fahrenheit = %.2f\n\n\n", faren);
    return 0;
}
//  find sum and average of first n natural numbers
#include <stdio.h>
int main()
{
    int n;
    float sum, avg;
    printf("Enter upper limit number: ");
    scanf("%d", &n);
    sum = (n * (n + 1)) / 2;
    avg = sum / n;
    printf("%.0f\n", sum);
    printf("%.1f", avg);

    return 0;
}
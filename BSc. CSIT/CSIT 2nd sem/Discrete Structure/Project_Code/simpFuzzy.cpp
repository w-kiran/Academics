#include <stdio.h>

int main()
{
    int na, nb;
    printf("Assign the number of membership function of fuzzy set A: ");
    scanf("%d", &na);
    printf("Assign the number of membership function of fuzzy set B: ");
    scanf("%d", &nb);
    float a[na], b[nb];
    int i, j;
    printf("Assign %d membership functions to fuzzy set A: ", na);
    for (i = 0; i < na; i++)
    {
        scanf("%f", &a[i]);
        if (a[i] < 0 || a[i] > 1)
        {
            printf("Error! Invalid membership function.\nMembership function should lie between 0 and 1.");
            return 1;
        }
    }
    printf("Assign %d membership functions to fuzzy set B: ", nb);
    for (i = 0; i < nb; i++)
    {
        scanf("%f", &b[i]);
        if (b[i] < 0 || b[i] > 1)
        {
            printf("Error! Invalid membership function.\nMembership function should lie between 0 and 1.");
            return 1;
        }
    }
    printf("Fuzzy sets are: \n");
    printf("A = { ");
    j = 1;
    for (i = 0; i < na; i++)
    {
        printf("(x%d,%0.2f) ", j, a[i]);
        j++;
    }
    printf("}\n");
    printf("B = { ");
    j = 1;
    for (i = 0; i < nb; i++)
    {
        printf("(x%d,%0.2f) ", j, b[i]);
        j++;
    }
    printf("}\n");
    printf("Union operation\n");
    printf("A U B = { ");
    j = 1;
    for (i = 0; i < na; i++)
    {
        printf("(x%d,", j);
        if (a[i] > b[i])
            printf("%0.2f) ", a[i]);
        else
            printf("%0.2f) ", b[i]);
        j++;
    }
    printf("}\n");
    printf("Intersection operation\n");
    printf("A n B = { ");
    j = 1;
    for (i = 0; i < na; i++)
    {
        printf("(x%d,", j);
        if (a[i] < b[i])
            printf("%0.2f) ", a[i]);
        else
            printf("%0.2f) ", b[i]);
        j++;
    }
    printf("}\n");
    printf("Complement operation\n");
    printf("A' = { ");
    for (i = 0; i < na; i++)
    {
        printf("(x%d,%0.2f) ", i + 1, 1.0 - a[i]);
    }
    printf("}\n");
    printf("B' = { ");
    for (i = 0; i < nb; i++)
    {
        printf("(x%d,%0.2f) ", i + 1, 1.0 - b[i]);
    }
    printf("}\n");
    return 0;
}

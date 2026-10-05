#include <stdio.h>

int main()
{
    float a, b, largest, smallest;

    printf("Enter two values: ");
    scanf("%f %f", &a, &b);

    if (a > b)
    {
        largest = a;
        smallest = b;
    }
    else
    {
        largest = b;
        smallest = a;
    }

    printf("Largest = %.2f\n", largest);
    printf("Smallest = %.2f\n", smallest);

    return 0;
}
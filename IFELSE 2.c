#include <stdio.h>

int main()
{
    float a, b, c, largest, smallest;

    printf("Enter three values: ");
    scanf("%f %f %f", &a, &b, &c);

    largest = a;
    smallest = a;

    if (b > largest)
        largest = b;
    if (c > largest)
        largest = c;

    if (b < smallest)
        smallest = b;
    if (c < smallest)
        smallest = c;

    printf("Largest = %.2f\n", largest);
    printf("Smallest = %.2f\n", smallest);

    return 0;
}
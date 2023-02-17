#include <stdio.h>

int main()
{
    float length, breadth;

    printf("Enter length of Reactangle: ");
    scanf("%f", &length);

    printf("Enter breadth of Reactangle: ");
    scanf("%f", &breadth);

    float area = length * breadth;
    printf("Area of Rectangle = %.2f", area);

    return 0;
}
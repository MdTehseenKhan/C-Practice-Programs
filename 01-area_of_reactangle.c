#include <stdio.h>

int main()
{
    float length, breadth;

    printf("Enter length of Reactangle: ");
    scanf("%f", &length);

    printf("\nEnter breadth of Reactangle: ");
    scanf("%f", &breadth);

    float area = length * breadth;
    printf("\nArea of Rectangle = %.2f", area);

    return 0;
}
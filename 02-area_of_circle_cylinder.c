#include <stdio.h>

int main()
{
    float radius, height;
    float PI = 3.14;

    printf("Input radius of the circle: ");
    scanf("%f", &radius);

    float area = PI * radius * radius;
    printf("\nArea of circle is %f", area);

    printf("\nInput height of the circle: ");
    scanf("%f", &height);

    float volume = PI * radius * radius * height;
    printf("\nVolume of Cylinder is %f", volume);

    return 0;
}
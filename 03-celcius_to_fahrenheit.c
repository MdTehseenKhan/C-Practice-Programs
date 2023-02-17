#include <stdio.h>

int main()
{
    float celcius;

    printf("Enter temperature in celcius: ");
    scanf("%f", &celcius);

    float fahrenheit = (celcius * 9 / 5) + 32;
    printf("\nOn Fahrenheit Scale = %f F", fahrenheit);

    return 0;
}
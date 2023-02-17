#include <stdio.h>

int main()
{
    float principal, rate, years;

    printf("How much money do you want to lend? ");
    scanf("%f", &principal);

    printf("How much percent do you want to be charged? ");
    scanf("%f", &rate);

    printf("After how many years will you return money? ");
    scanf("%f", &years);

    float interest = (principal * rate * years) / 100;
    printf("Your Interest would be = %.2f percent", interest);

    float total = principal + (principal * interest / 100);
    printf("\nYour Total amount would be = %f Rs.", total);

    return 0;
}
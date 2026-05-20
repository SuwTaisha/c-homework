#include <stdio.h>

int main()
{
    double a;
    printf("How much money do you have in your pocket? ");
    scanf("%lf", &a);
    printf("The amount of money in your pocket is $%.2lf", a);

    return 0;
}
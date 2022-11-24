#include <stdio.h>

double pow1(double num1, int num2)
{
    if (num2 == 0)
        return 1;

    double result = 1;

    for (int i = 1; i <= num2; i++)
        result *= num1;

    return result;
}
int main()
{
    double num1;

    printf("Plaese enter number(1) : ");
    scanf("%lf", &num1);

    int num2;

    printf("Plaese enter number(2) : ");
    scanf("%d", &num2);

    printf("The result is : %lf\n", pow1(num1, num2));
}

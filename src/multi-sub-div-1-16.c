#include <stdio.h>

float msd(float num1, float num2)
{
    return (num1 * num2) - (num1 / num2);
}
int main()
{
    float num1, num2;

    printf("Please enter number (1) ");
    scanf("%f", &num1);
    printf("Please enter number (2) ");
    scanf("%f", &num2);

    printf("Result is : %f\n", msd(num1, num2));
    return 0;
}

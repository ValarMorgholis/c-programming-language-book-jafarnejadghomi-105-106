#include <stdio.h>

void msd(float num1, float num2, float *newMulti, float *newSub, float *newDiv)
{
    *newMulti = num1 * num2;
    *newSub = num1 - num2;
    *newDiv = num1 / num2;
}
int main()
{
    float num1, num2, multi, sub, div;

    printf("Please enter number (1) : ");
    scanf("%f", &num1);
    printf("Please enter number (2) : ");
    scanf("\n%f", &num2);

    msd(num1, num2, &multi, &sub, &div);

    printf("Multiplication of these number is : %f\n", multi);
    printf("Submation of these number is : %f\n", sub);
    printf("division of these number is : %f\n", div);

    return 0;
}

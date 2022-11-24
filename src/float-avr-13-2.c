#include <stdio.h>

float avr(int maxN)
{
    int count = 1;
    float a[maxN], sum = 0;

    for (; count <= maxN; count++)
    {
        printf("Enter the (%d) number : ", count);
        scanf("%f", &a[count]);

        sum = sum + a[count];
    }
    return sum / count;
}
int main()
{
    int maxN;

    printf("How many number do you have? ");
    scanf("%d", &maxN);

    printf("Avrage these (%d) numbers is %f\n", maxN, avr(maxN));

    return 0;
}

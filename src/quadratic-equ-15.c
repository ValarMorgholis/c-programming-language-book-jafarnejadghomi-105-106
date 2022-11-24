#include <stdio.h>
#include <math.h>

void qua(float a, float b, float c)
{
    float d, x1, x2;

    d = (b * b) - 4 * a * c;

    if (d < 0)
    {
        printf("There is no root.");
    }
    else if (d == 0)
    {
        x1 = (-b + sqrt(d)) / 2 * a;
        x2 = x1;
        printf("first root is %f and the second root is %f", x1, x2);
    }
    else
    {
        x1 = (-b + sqrt(d)) / 2 * a;
        x2 = (-b - sqrt(d)) / 2 * a;
        printf("first root is %f and the second root is %f", x1, x2);
    }
}
int main()
{
    float a, b, c;

    printf("Please enter a: ");
    scanf("%f", &a);

    printf("Please enter b: ");
    scanf("%f", &b);

    printf("Please enter c: ");
    scanf("%f", &c);

    qua(a, b, c);
    return 0;
}

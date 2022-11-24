#include <stdio.h>
float temp(float temp)
{
    return (temp * 1.8) + 32;
}
int main()
{
    float c;

    printf("Please enter temperature per centigrade : ");
    scanf("%f", &c);

    printf("Temperature per fahrenheit is : %f", temp(c));
    return 0;
}

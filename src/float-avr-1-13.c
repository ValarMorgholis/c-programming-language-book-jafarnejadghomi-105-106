#include <stdio.h>

float avr(int n1, int n2, int n3)
{
    return (n1 + n2 + n3) / 3;
}
int main()
{

    int n[4];
    float anw;
    
    for (int i = 1; i <= 3; i++)
    {
        printf("Please enter number (%d)  : ", i);
        scanf("%d", &n[i]);
    }
    anw = avr(n[1], n[2], n[3]);

    printf("Avarge of these number is : %f", anw);
    return 0;
}

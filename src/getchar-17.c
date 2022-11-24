#include <stdio.h>

void print(char ch, int i, int j)
{
    for (; i <= j; i++)

        printf("%c\t", ch);

    printf("\n");
}
int main()
{
    int i, j;
    char ch;

    printf("Please enter a charachter : ");
    scanf("%c", &ch);

    printf("Please enter i : ");
    scanf("%d", &i);
    printf("Please enter j : ");
    scanf("%d", &j);

    print(ch, i, j);
    return 0;
}

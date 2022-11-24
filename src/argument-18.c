#include <stdio.h>

void prt(char ch, int l, int lcount)
{
    for (int i = 0; i < lcount; i++)
    {
        for (int j = 0; j < l; j++)
            printf("%c", ch);
        printf("\n");
    }
}
int main()
{
    int l, lcount;
    char ch;

    printf("Please enter a charachter : ");
    scanf("%c", &ch);

    printf("How many time do you want print your charachter in the line ? ");
    scanf("%d", &l);

    printf("How many line do you want print your charachter ? ");
    scanf("%d", &lcount);

    prt(ch, l, lcount);
    return 0;
}

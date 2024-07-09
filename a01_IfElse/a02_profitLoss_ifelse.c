#include <stdio.h>

int main()
{

    int sp, cp;
    printf("Enter Cost Prise\n");
    scanf("%d", &cp);

    printf("Enter Selling Prise\n");
    scanf("%d", &sp);

    int a = sp - cp;

    if (a < 0)
    {
        a = a * (-1);
    }

    if (sp > cp)
    {
        printf("Profit of %d\n", a);
    }

    else if (cp > sp)
    {
        printf("Loss of %d\n", a);
    }

    else
    {
        printf("NO PROFIT NO LOSS");
    }

    return 0;
}
#include <stdio.h>

int main(){

    int a;
    printf("Enter num\n");
    scanf("%d" ,&a);

    if (a%5==0 || a%3==0)
    {
        printf("%d is Devidable by 5 or 3\n" ,a);
    }

    else{
        printf("%d is not Devidable by 5 or 3\n" ,a);
    }
    





    return 0;
}

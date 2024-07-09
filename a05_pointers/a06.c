#include <stdio.h>

int main (){
    int n,sum = 0;
    printf("Enter Number : ");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        sum = i*i*i;
        printf("Cube of %d is %d\n",i,sum);
    }

    return 0;
}
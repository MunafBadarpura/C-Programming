#include <stdio.h>

int main (){
    int n;
    printf("enter number:");
    scanf("%d",&n);

    int sum =0;
    int ld;
    while (n!=0)
    {
        ld =n%10;
        if(ld%2==0){
        sum = sum +ld;
        }
        n=n/10;
    }
        printf("%d",sum);
  
    return 0;
}
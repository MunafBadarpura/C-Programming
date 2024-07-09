#include <stdio.h>

int main (){
    int a;
    printf("Enter A Year : ");
    scanf("%d",&a);
    if(a%4==0) printf("%d is leap year",a);
    else printf("%d is not a leap year",a);

     

    
    
    return 0;
}
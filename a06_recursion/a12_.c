#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter Number 1 : ");
    scanf("%d",&a);
    printf("Enter Number 2 : ");
    scanf("%d",&b);
    printf("Enter Number 3 : ");
    scanf("%d",&c);

    if(a>b){
        if(a>c){
            printf("%d is a Greatest Number",a)
          }
       }
    else if(b>c){
         printf("%d is a Greatest Number",b);
         
         }

    else { printf ("%d is a greatest Number",c); }
    
    return 0;
}
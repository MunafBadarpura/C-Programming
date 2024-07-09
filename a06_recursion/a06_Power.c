#include <stdio.h>
int power(int a,int b){
    if(b==0) return 1;

    return a*power(a,b-1); 
}

int main (){
   int a;
    printf("Enter number a: ");
    scanf("%d",&a);
    int b;
    printf("Enter number b: ");
    scanf("%d",&b);

    int c = power(a,b);
    printf("%d power %d is %d" ,a,b,c);

    return 0;
}
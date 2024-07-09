#include <stdio.h>
int sum (int n){
    if (n==1 ||n==0) return n;
    
        return n + sum(n-1);
    
}

int main (){
    int n;
    printf("Enter number:");
    scanf("%d",&n);

    int a = 1;
    a = a * sum(n);
    printf("%d",a);
    
    return 0;
}
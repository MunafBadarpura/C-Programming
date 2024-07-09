#include <stdio.h>

int main (){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    int a = 0;
    for (int i=2;i<=n-1;i++){
        if(n%i==0){
            a = 1;
            break;
        }
    }
    if(n==1) printf("The Number Is Nor Composite Nor Prime");
    else if(a==1) printf("The Number Is Composite");
    else printf("The Number Is Prime");
    
    return 0;
}
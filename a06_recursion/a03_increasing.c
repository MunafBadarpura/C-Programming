#include <stdio.h>
void increicing (int x ,int n){
    if(n<x) return;
    printf("%d\n",x);
     increicing(x+1,n);
     return;

}

int main (){
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    
    int x = 1;
     increicing(x,n);

    
    
    

    return 0;
}
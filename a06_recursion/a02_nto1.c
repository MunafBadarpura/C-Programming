#include <stdio.h>
void decreicing (int n){
    if(n==0) return;
     
    printf("%d\n",n);
    decreicing(n-1);
     return;

}

int main (){
    int n;
    printf("Enter number:");
    scanf("%d",&n);

   decreicing(n);

    
    
    

    return 0;
}
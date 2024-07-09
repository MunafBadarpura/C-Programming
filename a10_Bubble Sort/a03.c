#include<stdio.h>
int main(){
    int n;
    printf("Enter Size :" );
    scanf("%d",&n);

    int arr[n];
    printf("Enter Arrar : ");
    for(int i = 0;i<=n;i++){
        scanf("%d",&arr[i]);
    }
  
    
    int sum = (n*(n+1)) / 2;
   
    
    int a = 0;
    for(int i=0;i<=n;i++){
         a = a + arr[i];
    }
    printf("%d",a-sum);

    return 0;
}
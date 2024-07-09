#include <stdio.h>

int main (){
    int arr[8] = {3,4,1,5,8,4,6,4};
    int n;
    printf("enter n\n");
    scanf("%d",&n);
    int count = 0;
    for(int i=0;i<=7;i++){
        if(arr[i]>n){
            count = count + 1;
        }
    
    }
    printf("%d",count);

    
    
    return 0;
}
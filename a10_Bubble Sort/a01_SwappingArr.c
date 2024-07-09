#include <stdio.h>
int main(){
    int arr[5]= {10,5,2,47,90};
    int n = 5;
    for (int i=0;i<=n-1;i++){
        printf("%d ",arr[i]);
    }
    // BUBBLE SORT
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
             int temp = arr[j];
             arr[j] = arr[j+1];
             arr[j+1] = temp;
            }
      }
    
    
    }  
    printf("\n");
    for(int i = 0;i<=n-1;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
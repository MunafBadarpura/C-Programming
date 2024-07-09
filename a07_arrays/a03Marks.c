#include <stdio.h>

int main (){
    int arr[10];
    for(int i=0;i<=9;i++){
        printf("Enter %d index Marks : ",i+1);
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<=9;i++){
    if(arr[i]<25){
        printf("%d\n",i);}
   
    }

    
    
    
    return 0;
}
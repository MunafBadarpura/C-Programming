#include <stdio.h>

int main (){
    // int arr[5] = {1,4,7,3,4};
    // printf("%d\n",arr[1]);

    // arr[0] = 10; //update value
    // printf("0 index is now %d\n",arr[0]);
    
    // //input
    // int brr[2];
    // printf("enter first index\n");
    // scanf("%d",&brr[0]);
    // printf("enter second index\n");
    // scanf("%d",&brr[1]);

    // printf("0 index is %d",brr[0]);

    //using loops.

    // int crr[5] = {5,8,6,4,3};

    // for (int i = 0;i<=4 ;i++)
    // {
    //     printf("%d ",crr[i]);
    // }
    

    //input using loops
    int drr[5];
    for(int i=0;i<=4;i++){
        scanf("%d",&drr[i]);
    }
    printf("first index is %d",drr[0]);
    

    return 0;
}
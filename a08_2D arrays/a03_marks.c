#include <stdio.h>

int main (){
    int n;
    printf("Enter number of students : ");
    scanf("%d",&n);

    int arr[n][4];
    for (int i=0;i<n;i++){//raws
        for(int j=0;j<4;j++){//colums
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");

    for (int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }


    
    
    return 0;
}
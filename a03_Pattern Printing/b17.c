#include <stdio.h>

int main (){
    int n;
    printf("enter number of lines:\n");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){

        for(int j = 1;j<=n-i;j++){
            printf("  ");
        }
        for(int k = 1;k<=i*2-1;k++){
            printf("%c ",k+64);
        }
        printf("\n");
    }
    return 0;
}
       
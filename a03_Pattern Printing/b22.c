#include <stdio.h>

int main (){
    int n;
    printf("enter number of lines:\n");
    scanf("%d",&n);
    int spc = 1;
    int str = n;
    

for(int f = 1;f<=n*2+1;f++){
    printf("%d ",f);
}
printf("\n");

    for(int i = 1;i<=n;i++){
        int a = 1;

        for(int j = 1;j<=str;j++){
            printf("%d ",a);
             a++;
        }
        for(int k =1;k<=spc;k++){
            printf("  ");
        }
        for(int l = 1;l<=str;l++){
            printf("%d ",a);
             a++;
        }
        str--;
        spc+=2;
       
    printf("\n");
    }
    return 0;
}
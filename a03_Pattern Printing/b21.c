#include <stdio.h>
int main (){
    int n;
    printf("enter number of lines:\n");
    scanf("%d",&n);
    int str = n;
    int spc = 1;
   
for(int f = 1;f<=n*2+1;f++){
    printf("* ");
}
printf("\n");

    for(int i=1;i<=n;i++){
        for(int k = 1;k<=str;k++){
            printf("* ");
        }

        for(int j = 1;j<=spc;j++){
            printf("  ");
        }

        for(int l = 1;l<=str;l++){
            printf("* ");
        }
        str--;
        spc+=2;

        printf("\n");
}  
   
    return 0;
}
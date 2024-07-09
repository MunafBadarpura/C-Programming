#include <stdio.h>

int main (){
    int n;
    printf("enter number of lines:\n");
    scanf("%d",&n);
    int spc = n/2;
    int str = 1;
    int mdl = n/2+1;

    for(int i =1;i<=n;i++){

        for(int j=1;j<=spc;j++){  // for spaces
            printf("  ");
        }
        for(int l=1;l<=str;l++){  // for stars
            printf("* ");
        }
       
        if(i<mdl) {
            spc--;
            str = str + 2;
        }
        else {
            spc++;
            str = str - 2;
        }

        printf("\n");
    }

    return 0;
}
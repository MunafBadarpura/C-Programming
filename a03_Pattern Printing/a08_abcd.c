#include <stdio.h>

int main (){
    int n;
    printf("enter number:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){ 
       int a=1; 
       for(int j=1;j<=n;j++){
        
        int b=a+64;
        char c = (char)b;
        printf("%c ",c);
        fflush(stdout);//for fast proccecing

        a++;
        
       }
       printf("\n");
}
    
    return 0;
}




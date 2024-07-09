#include <stdio.h>
int main(){
int n;
printf("Enter the Number Which table You Want\n");
scanf("%d" ,&n);
printf("%d table:\n" ,n);

    for (int i=n; i<=n*10; i=i+n){

        printf("%d\n",i);
            
        }





    return 0;
}
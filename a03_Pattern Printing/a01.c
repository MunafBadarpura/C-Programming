#include <stdio.h>

int main (){
    int a,b;
    printf("enter number of Rows:\n");//number os lines
    scanf("%d",&a);
    printf("enter number of Columms:\n");//number of stars
    scanf("%d",&b);
    

    for(int i=1;i<=a;i++){//number os lines
        for(int i=1;i<=b;i++){//number of stars
            printf("* ");
        }
        printf("\n");

}

    return 0;
}








// #include <stdio.h>

// int main () {
//     int n ;
//     printf("Enter the no. of rows  :");
//     scanf("%d",&n);
//     char c ;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 65; j <= 90; j++)
//         {
//            printf("%c",i) ;
//         }
//         printf("\n");
//     }
    
//     return 0;
// }




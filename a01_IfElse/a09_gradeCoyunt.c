#include <stdio.h>

float main(){
    float a;
    printf("enter percentage\n");
    scanf("%d" ,&a);

    if (a>90 && a<=100)
    {
        printf("YOU GOT A GRADE");
    }

    else if (a>70 && a<=90)
    {
        printf("YOU GOT B GRADE");
    }
    
    else if (a>60 && a<=70)
    {
         printf("YOU GOT C GRADE");
    }

    else if (a>40 && a<=60)
    {
         printf("YOU GOT D GRADE");
    }
    

    else if (a<=40 && a>=0){
         printf("YOU GOT E GRADE(FAIL)");
    }

    else{
         printf("INVALID PEERCENTAGE");
    }
    
    


}
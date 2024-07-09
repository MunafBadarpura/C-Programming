#include <stdio.h>



#include<math.h>

int main (){
    int number;
    printf("ENTER NUMBER BTTWEEN 1 TO 7:");
    scanf("%d" ,&number);

    switch(number){
        case 1:
        printf("MONDAY");
        break;

        case 2:
        printf("TUESDAY");
        break;

        case 3:
        printf("wednesday");
        break;

        case 4:
        printf("THURSDAY");
        break;

        case 5:
        printf("FRIDAY");
        break;

        case 6:
        printf("SATURDAY");
        break;

        case 7:
        printf("SUNDAY");
        break;

        default:
        printf("INVALID NUMBER");


    }

   
    return 0;
}




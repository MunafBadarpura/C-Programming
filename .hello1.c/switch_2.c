#include <stdio.h>


#include<math.h>

int main (){
   int number;
    printf("ENTER MONTH BTTWEEN 1 TO 12:");
    scanf("%d" ,&number);

    switch(number){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:

        printf("SEMISTER 1\n");

        break;

        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:

        printf("SEMISTER 2\n");
        break;

        default:
        printf("INVALID NUMBER\n");

        



    }




    

    
    
    
    
    
    
    return 0;
}
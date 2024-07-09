#include <stdio.h>



#include<math.h>

int main (){
    
    int age;
    printf("ENTER YOUR AGE\n");
    scanf("%d" ,&age);

    if (age<10)
    {
        printf("YOU ARE  APPLICABLE TO VOTE FOR KIDS\n");
    }
    
     else if (age>10 ,age<18){
        printf("YOU ARE APPLICABLE TO VOTE FOR TEENS\n");
    }

    else if (age>18 , age<25){
        printf("YOU ARE APPLICABLE TO VOTE FOR ANYONE\n");
    }
    
    else{
        printf("YOU ARE NOT APPLICABLE TO VOTE FOR ANYONE");
    }

    
    
    
    return 0;
}

    
    
     

     

     
     

     
     
     

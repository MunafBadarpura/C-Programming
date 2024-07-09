#include <stdio.h>
#include <string.h>
int main (){
    typedef struct pokemon{
        char name[20];
        int speed;
        int atteck;
        int power;
        char grade;

    }pokemon;
    pokemon arr[3];

    strcpy(arr[0].name,"Pikachu");
    arr[0].speed = 150;
    arr[0].atteck = 130;
    arr[0].power = 120;
    arr[0].grade ='A';

    strcpy(arr[1].name,"Poky");
    arr[1].speed = 120;
    arr[1].atteck = 80;
    arr[1].power = 90;
    arr[1].grade ='b';

    strcpy(arr[2].name,"chiza");
    arr[2].speed = 70;
    arr[2].atteck = 80;
    arr[2].power = 40;
    arr[2].grade ='c';

    for(int i = 0;i<3;i++){
        printf("%s",arr[i].name);
        printf("%d\n",arr[i].speed);
        printf("%d\n",arr[i].atteck);
        printf("%d\n",arr[i].power);
        printf("%c\n",arr[i].grade);
    }


  
    
    
    return 0;
}
#include <stdio.h>
#include <string.h>
    typedef struct pokemon{
        char name[20];
        int speed;
        int atteck;
        int power;
        char grade;
      }pokemon;
void fun(pokemon pikachu){
    printf("%d",pikachu.atteck);
    return;
}

int main (){
    pokemon pikachu;
    pikachu.atteck = 150;
    fun(pikachu);
   
    return 0;
}
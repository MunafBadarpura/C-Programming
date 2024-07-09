#include <stdio.h>

#include<math.h>

int main (){
  
  int number;
  printf("ENTER NUMBER\n");
  scanf("%d" , &number);
  printf("table is here\n");

  int count = 1;
  while (count <= 10)
  {
    int product = number * count;
    printf("%d\n" , product);
    count = count + 1;
  }
  
  return 0;

  


  }




  
  
  
  

  
  
 
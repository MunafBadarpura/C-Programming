#include <stdio.h>

int main (){
    int num,sum = 0;
    float average;
    printf("Enter 10 numbers : ");
    for(int i = 1;i<=10;i++){
        printf("Enter number %d : ",i);
        scanf("%d",&num);
        sum +=num;
    }
    average = (float)sum/10;
    printf("sum :%d\n",sum);
    printf("average :%.2f",average);



    return 0;
}
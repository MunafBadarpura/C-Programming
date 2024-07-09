#include <stdio.h>

int main (){
    int maths,phy,chem;
    printf("Enter Your Maths Marks : ");
    scanf("%d",&maths);
    printf("Enter Your Physics Marks : ");
    scanf("%d",&phy);
    printf("Enter Your Chemistry Marks : ");
    scanf("%d",&chem);
    
    if(maths>=65 && phy>=65 && chem>=50 && maths+phy>=140 && maths+chem+phy>=190)
    printf("You Are Eligible To Admisson");
    else printf("You Are Not Eligible To Admisson");

    
    
    return 0;
}
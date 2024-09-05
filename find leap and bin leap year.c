#include<stdio.h>

int main()
{
    // enter year
    int year;
    printf("enter a year:-");
    scanf("%d",&year);
    
    // chak lepe and bin liap year
    if(year%4==0){
        printf("leap year");
    }
    else{
        printf("bin leap year");
    }
    return 0;
}
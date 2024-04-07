#include <stdio.h>
int main(){
    int number ;
    printf("enter a number :");
    scanf("%d",&number);
    switch(number>0?1:number<0?-1:0){
        case 1:
        printf("entered number is positive ");
        break;
        case -1:
        printf("entered number is negative");
        break;
        case 0:
        printf("invalid output ");
        break;
        return 0;
        
    }
}
#include<stdio.h>
int main(){
    long int num,result=1;
    printf("enter a positive integer:");
    scanf("%1d", &num);
    start:
    if(num>0) {
       result*=num;
       num--;
       goto start;
    }
    printf("factorial of %1d is: %1d\n",num,result);
    return 0;
}

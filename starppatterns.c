#include <stdio.h>
int main(){
    int i,j;
    printf("enter number of rows :");
    scanf("%d",&j);
    for( int i=0; i<j ;i=i+1)
    {
        printf("*",j);
        printf("@",i)
    }
    return 0;


}
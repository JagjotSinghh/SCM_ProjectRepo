#include<stdio.h>
int main(){
    int khushi,jagjot,krish;
    printf("enter the age of khushi,jagjot and krish:");
    scanf("%d %d %d",&khushi,&jagjot,&krish);
    if(khushi>=jagjot && khushi>=krish){
        printf("khushi is the oldest");
    }
    else if(jagjot>=khushi && jagjot>=krish){
        printf("jagjot is the oldest");
    }
    else{
        printf("krish is the oldest");
    }
    return 0;
}
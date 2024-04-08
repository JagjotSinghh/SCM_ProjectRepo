#include <stdio.h>

int main(){
int n;
printf("Enter a number = ");
scanf("%d");

for(int i = 0; i < n; i++){
for(int j = i; j < n; j++){
printf("*\n");
}
printf("\t");
}
return 0;
}

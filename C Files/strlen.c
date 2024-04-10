#include <stdio.h>
#include <string.h>
void print_length(char *string){
    printf("length of thr string is %lu",strlen(string));
}
int main(){
    char my_string[]="HARMAN IS MAH NAME ";
    print_length(my_string);
    return 0;
}
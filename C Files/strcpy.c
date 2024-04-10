#include <stdio.h>
#include <string.h>

void copy_string(char* source_str, char* copied_array) {
    strcpy(copied_array, source_str);
}

int main() {
    const char* source_string = "Hello, World!";
    char copied_array[50]; 
    
    copy_string(source_string, copied_array);
    printf("%s\n", copied_array);
    
    return 0;
}

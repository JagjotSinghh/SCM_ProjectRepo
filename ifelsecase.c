#include<stdio.h>
int main() {
    char classObtained;
    int subjectsFailed;
    printf("Enter the class obtained (A/B/C): ");
    scanf(" %c", &classObtained);
    printf("Enter the number of subjects failed: ");
    scanf("%d", &subjectsFailed);
    switch(classObtained) {
        case 'A':
            if(subjectsFailed <= 3) {
                printf("Grace marks: %d marks per subject\n", subjectsFailed * 5);
            } else {
                printf("No grace marks\n");
            }
            break;
        case 'B':
            if(subjectsFailed <= 2) {
                printf("Grace marks: %d marks per subject\n", subjectsFailed * 4);
            } else {
                printf("No grace marks\n");
            }
            break;
        case 'C':
            if(subjectsFailed <= 1) {
                printf("Grace marks: %d marks per subject\n", subjectsFailed * 3);
            } else {
                printf("No grace marks\n");
            }
            break;
        default:
            printf("Invalid class entered!\n");
    }
    return 0;
}

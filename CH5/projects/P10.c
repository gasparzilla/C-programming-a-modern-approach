#include <stdio.h>

int main(void){
    
    char letter = 'F';

    int grade, grade_head;
    printf("Enter a numerical grade (0-100): ");
    scanf("%d", &grade);
    if (grade > 100 || grade < 0){
        printf("grades can't be greater than 100 or less than 0!\n");
    }
    else {
        grade_head = grade / 10;
        switch(grade_head){
            case 10: case 9:
                letter = 'A';
                break;
            case 8:
                letter = 'B';
                break;
            case 7:
                letter = 'C';
                break;
            case 6:
                letter = 'D';
                break;
        }
        printf("Letter grade: %c\n", letter);
    }
    return 0;
}

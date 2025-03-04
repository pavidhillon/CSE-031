#include <stdio.h>

int main() {
    int repetitionAmount, lineTypo;

// Get repetition amount and make sure it is above 0
    printf("Enter the repetition count for the punishment phrase: ");
    while (scanf("%d", &repetitionAmount) != 1 || repetitionAmount <= 0) {
        printf("You entered an invalid value for the repetition count! Please re-enter: ");
        while(getchar() != '\n'); 
    }

// Get the typo line and make sure it is greater than the repetition amount 
    printf("Enter the line where you want to insert the typo: ");
    while (scanf("%d", &lineTypo) != 1 || lineTypo < 1 || lineTypo > repetitionAmount) {
        printf("You entered an invalid value for the typo placement! Please re-enter: ");
        while(getchar() != '\n'); 
    }

// Print the phrase with the typo at the specified line 
    for (int i = 1; i <= repetitionAmount; i++) {
        if (i == lineTypo) {
            printf("Cading wiht is C avesone!\n");
        } else {
            printf("Coding with C is awesome!\n");
        }
    }

    return 0;
}

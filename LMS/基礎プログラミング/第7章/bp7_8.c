#include <stdio.h>

int main(void) {
    int score;
    printf("Enter the score: ");
    scanf("%d", &score);
    if (score >= 90) {
        printf("Grade: S\n");
    } else if (score >= 80) {
        printf("Grade: A\n");
    } else if (score >= 70) {
        printf("Grade: B\n");
    } else if (score >= 60) {
        printf("Grade: C\n");
    } else {
        printf("Grade: D\n");
    }
    return 0;
}

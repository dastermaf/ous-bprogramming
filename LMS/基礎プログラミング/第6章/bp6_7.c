#include <stdio.h>

int main(void) {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 == num2 * 10) {
        printf("%d is 10 times %d.\n", num1, num2);
    } else {
        printf("%d is not 10 times %d.\n", num1, num2);
    }
    return (0);
}

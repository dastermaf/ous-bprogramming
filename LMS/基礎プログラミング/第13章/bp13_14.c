#include <stdio.h>

int main(void) {
    int i;
    double squares[5];



    for (i = 0; i < 7; i++) {
        squares[i] = i * i;
    }

    for (i = 0; i < 7; i++) {
        printf("dx[%d] = %d\n", i, squares[i]);
    }

    return (0);
}

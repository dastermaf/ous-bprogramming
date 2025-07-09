#include <stdio.h>

int main(void) {
    
    int repeat;

    do {
        int no;
        printf("整数を入力してください：  \n"); scanf("%d", &no);

        if (no == 0) {
            puts("その数は0です。\n");
        }
        else if (no > 0) {
            puts("その数は正です。\n");
        }
        else {
            puts("その数は負です。\n");
        }
        printf("C (1 - Yes, 0 - No): \n"); scanf("%d", &repeat);
    } while(repeat);

    return 0;
}
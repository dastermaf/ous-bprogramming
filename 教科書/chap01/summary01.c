/*
    長方形の面積を求めるプログラム
 */

#include <stdio.h>

int main(void) {
    int width; // 長方形の横幅
    int height; // 長方形の高さ

    puts("長方形の面積を求めます。");

    printf("横幅：");
    scanf("%d", &width);
    printf("たかさ：");
    scanf("%d", &height);

    // 表示
    printf("面積は%dです。\a\n", width * height);

    return 0;
}

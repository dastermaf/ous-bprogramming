// 文字列のコピー

#include <stdio.h>

int main(void) {
    char src[]= "Hello";
    char dest [20]; // Destination for copy
    int i;

    for ( i = 0; src[i] != '\0'; i++){
        dest [i] = src[i];
    }

    dest [i] = '\0'; // Append null terminator

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return (0);
}
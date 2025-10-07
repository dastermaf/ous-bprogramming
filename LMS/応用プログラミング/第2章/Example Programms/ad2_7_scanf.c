// 文字列の検索

#include <stdio.h>

int main(void) {
    char text[15];
    char search_char;
    int i = 0;
    int found_index = -1; // -1 if not found

    printf("Enter the text: "); scanf("%14s", text);
    printf("Enter the character: "); scanf("%c", &search_char);

    while (text[i] != '\0') {
        if (text[i] == search_char) {
            found_index = i;
            break; // Exit after first occurrence
        }
        i++;
    }

    if (found_index != -1){
        printf("Character '%c' found [%d]\n", search_char, found_index);
    } else {
        printf("Character '%c' not found.\n", search_char);
    }

    return(0);
}

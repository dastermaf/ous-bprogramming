#include <stdio.h>

int main(void) {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if (year >= 2019) {
        printf("Reiwa %d\n", year - 2018);
    } else if (year >= 1989) {
        printf("Heisei %d\n", year - 1988);
    } else if (year >= 1926) {
        printf("Showa %d\n", year - 1925);
    } else if (year >= 1912) {
        printf("Taisho %d\n", year - 1911);
    } else if (year >= 1868) {
        printf("Meiji %d\n", year - 1867);
    } else {
        printf("Year is before Meiji era. \n");
    }
    return(0);
}

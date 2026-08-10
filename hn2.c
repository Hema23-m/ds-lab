#include <stdio.h>

int main() {
    char str[] = "spoorthy";
    int seen[256] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        if (seen[(unsigned char)str[i]]++) {
            printf("Last repeated character: '%c'\n", str[i]);
            return 0;
        }
    }

    printf("No repeated characters found.\n");
    return 0;
}


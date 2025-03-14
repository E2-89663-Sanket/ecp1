#include <stdio.h>
#include <string.h>

char* remove_char(char* str, char c) {
    int len = strlen(str);
    int i, j;
    for (i = 0; i < len; i++) {
        if (str[i] == c) {
            for (j = i; j < len; j++) {
                str[j] = str[j + 1];
            }
            i--;
            len--;
        }
    }
    return str;
}

int main() {
    char str[] = "Sanket";
    char c = 'a';
    remove_char(str, c);
    printf("%s\n", str);
    return 0;
}

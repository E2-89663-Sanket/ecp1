#include<stdio.h>
#include <string.h>

char* remove_chars(char* str1, char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int i, j, k;

    for (i = 0; i < len2; i++) {
        for (j = 0; j < len1; j++) {
            if (str2[i] == str1[j]) {
                for (k = i; k < len2; k++) {
                    str2[k] = str2[k + 1];
                }
                i--; 
                len2--;
                break;
            }
        }
    }
    return str2;
}

int main() {
    char str1[] = "aeiou";
    char str2[] = "hello everyone";
    remove_chars(str1, str2);
    printf("%s\n", str2);
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void stringfunctions() {
    char str1[100] = "hello, nagpur !";
    char str2[100];
    char str3[100] = "hello, ";
    char str4[100] = "nagpur";
    char *token;
    char *result;

    printf("length of str1: %zu\n", strlen(str1));

    strcpy(str2, str1);
    printf("str2 after strcpy: %s\n", str2);

    strcat(str3, str4);
    printf("str3 after strcat: %s\n", str3);

    int cmpResult = strcmp(str1, str2);
    printf("Comparison of str1 and str2: %d\n", cmpResult);

    int icmpResult = strcasecmp(str1, str4);
    printf("Case insensitive comparison of str1 and str4: %d\n", icmpResult);

    strrev(str2);
    printf("str2 after strrev: %s\n", str2);

    char *chPtr = strchr(str1, 'n');
    printf("Character 'n' found in str1 at: %s\n", chPtr);

    result = strstr(str1, "nagpur");
    printf("Substring 'nagpur' found in str1 at: %s\n", result);

    strncpy(str2, str1, 5);
    str2[5] = '\0';
    printf("str2 after strncpy: %s\n", str2);

    strncat(str3, str4, 3);
    printf("str3 after strncat: %s\n", str3);

    int ncmpResult = strncmp(str1, str2, 5);
    printf("Comparison of first 5 characters of str1 and str2: %d\n", ncmpResult);

    char str5[] = "Hello, are you fine!";
    token = strtok(str5, " ");
    printf("Tokens from str5:\n");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }
}

void strrev(char *str) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

int main() {
    stringfunctions();
    return 0;
}



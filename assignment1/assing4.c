#include <stdio.h>

int main() {
    
	char ch;
  
	int ascii;
    

	
  
    printf("Enter a character: ");
    scanf(" %c", &ch);
    printf("ASCII value of '%c' in Decimal: %d, Hex: %X, Octal: %o\n", ch, ch, ch, ch);
    
    




	printf("Enter an ASCII value: ");
    scanf("%d", &ascii);
    printf("Character for ASCII value %d: %c\n", ascii, ascii);
    
    return 0;
}


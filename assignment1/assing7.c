#include <stdio.h>

int main() {
    int num, d1, d2, d3, d4;
    
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);
    
   
    d1 = num / 1000;   
    d2 = (num / 100) % 10;
    d3 = (num / 10) % 10; 
	d4 = num % 10;         
    
    
    printf("Face values:\n");
    printf("%d  %d  %d  %d\n", d1, d2, d3, d4);
    
    
    printf("Place values:\n");
    printf("%d  %d  %d  %d\n", d1 * 1000, d2 * 100, d3 * 10, d4);
    
    
    int reversed = (d4 * 1000) + (d3 * 100) + (d2 * 10) + d1;
    printf("Reversed number: %d\n", reversed);
    
    return 0;
}

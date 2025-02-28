#include <stdio.h>

int main() {
    signed char a, b;
    unsigned char c, d;
    int e, f;
    long g, h;

    
    printf("Enter two signed char values: ");
    
	scanf("%hhd %hhd", &a, &b);
    
	printf("Sum: %d, Difference: %d, Product: %d\n", a + b, a - b, a * b);

    printf("Enter two unsigned char values: ");
    
	scanf("%hhu %hhu", &c, &d);
    
	printf("Sum: %u, Difference: %u, Product: %u\n", c + d, c - d, c * d);

    printf("Enter two int values: ");
    
	scanf("%d %d", &e, &f);
    
	printf("Sum: %d, Difference: %d, Product: %d\n", e + f, e - f, e * f);

    printf("Enter two long values: ");
    
	scanf("%ld %ld", &g, &h);
    
	printf("Sum: %ld, Difference: %ld, Product: %ld\n", g + h, g - h, g * h);
    
    return 0;
}


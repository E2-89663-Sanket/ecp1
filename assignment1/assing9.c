#include <stdio.h>
#include <float.h>

int main() {
    printf("Ranges of Floating-Point Types:\n");
    
    printf("\nFloat:\n");
    printf("Minimum: %e\n", FLT_MIN);
    printf("Maximum: %e\n", FLT_MAX);
    printf("Precision: %d digits\n", FLT_DIG);
    
    printf("\nDouble:\n");
    printf("Minimum: %e\n", DBL_MIN);
    printf("Maximum: %e\n", DBL_MAX);
    printf("Precision: %d digits\n", DBL_DIG);
    
    printf("\nLong Double:\n");
    printf("Minimum: %Le\n", LDBL_MIN);
    printf("Maximum: %Le\n", LDBL_MAX);
    printf("Precision: %d digits\n", LDBL_DIG);
    
    return 0;
}


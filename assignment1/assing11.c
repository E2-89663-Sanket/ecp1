#include <stdio.h>

int main() {
    float temp, convertedTemp;
    char unit;
    printf("Enter temperature (e.g., 30C or 86F): ");
	scanf("%f%c", &temp, &unit);
    convertedTemp = (unit == 'C'|| unit == 'c') * ((temp * 9 / 5) + 32) + 
                    (unit == 'F'|| unit == 'f') * ((temp - 32) * 5 / 9);
    printf("Converted temperature: %.2f %c\n", convertedTemp, (unit == 'C' || unit == 'c') * 'F' + (unit == 'F' || unit == 'f') * 'C');
    
    return 0;
}


#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, perimeter, semiPerimeter, area;
    
    printf("Enter the three sides of the triangle: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    perimeter = a + b + c;
    semiPerimeter = perimeter / 2;
    area = sqrt(semiPerimeter * (semiPerimeter - a) * (semiPerimeter - b) * (semiPerimeter - c));
    
    printf("Perimeter: %.2lf\n", perimeter);
    printf("Area: %.2lf\n", area);
    
    return 0;
}


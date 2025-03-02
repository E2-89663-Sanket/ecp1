#include <stdio.h>

int main() {
    float x, y;
    
    
    printf("enter the x-coordinate:> ");
    scanf("%f", &x);
    
	printf("enter the y-coordinate:> ");
    scanf("%f", &y);
    
    
    if (x == 0 && y == 0)
	{
        printf(" (%.2f, %.2f) lies at the origin.\n", x, y);
    } 

	else if (x == 0)
	{
        printf(" (%.2f, %.2f) lies on the Y-axis.\n", x, y);
    }
	else if (y == 0)
	{
        printf(" (%.2f, %.2f) lies on the X-axis.\n", x, y);
    }
	else if (x > 0 && y > 0) 
	{
        printf(" (%.2f, %.2f) lies in the first quadrant.\n", x, y);
    }
	else if (x < 0 && y > 0)
	{
        printf("(%.2f, %.2f) lies in the second quadrant.\n", x, y);
    }
	else if (x < 0 && y < 0)
	{
        printf("(%.2f, %.2f) lies in the third quadrant.\n", x, y);
    
	}
	else
	{
        printf(" (%.2f, %.2f) lies in the fourth quadrant.\n", x, y);
    }
    
    return 0;
}


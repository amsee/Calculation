#include <stdio.h>

int main(void)
{
	float height, width, area;

	// User input for height and width
	printf("Enter height of triangle: ");
	scanf("%f", &height);
	printf("Enter width of triangle: ");
	scanf("%f", &width);

	area = (height * width) * 0.5;
	
	// Output for area memory and value
	printf("The area of the triangle is %.2f\n", area);
	printf("The address of the triangle's area is in %p", &area);
	
	return 0;
	
}
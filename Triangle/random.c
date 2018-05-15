// include library
#include <stdio.h>
//calculate area of triangle
int main(void)
{
	float height, width;
	float product;
	float area;

	//prompt user to enter the height and base
	// accepts user input in decimal format
	printf("Enter height of triangle: ");
	scanf("%f", &height);
	printf("Enter width of triangle: ");
	scanf("%f", &width);
	//// multiply the product of the height and base by 0.5
	product = height * width;
	area = product * 0.5;
	//// stores area in memory and outputs area to 2 decimal places along with its address in memory in hexadecimal format
	//// use %p conversation specifier to output an address 
	printf("The area of the triangle is %f\n", area);
	printf("The address of the triangle's area is in %p", &area);
	return 0;
	
}
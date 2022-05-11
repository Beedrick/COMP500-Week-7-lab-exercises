#include <stdio.h>

void print_diagram(float width, float height);
float compute_area(float width, float height);
float compute_perimeter(float width, float height);

int main(void)
{
	printf("Rectangle width? ");
	float x;
	scanf("%f", &x);
	
	printf("Rectangle height? ");
	float y;
	scanf("%f", &y);

	print_diagram(x, y);

	//compute_area(x, y);
	
	//compute_perimeter(x, y);
	
	printf("\nThe area is: %.3f\n", compute_area(x, y));
	
	printf("The perimeter is: %.3f\n", compute_perimeter(x, y));
	

	return 0;
}

void print_diagram(float width, float height)
{
	printf("\n %.2f\n", width);
	printf("+-----+\n");
	printf("|     | %.2f\n", height);
	printf("+-----+\n");

	return;
}

float compute_area(float width, float height)
{
	float area = width * height;

	return area;
}

float compute_perimeter(float width, float height)
{
	float perimeter = (2 * width) + (2 * height);

	return perimeter;
}
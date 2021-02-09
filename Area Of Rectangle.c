#include <stdio.h>

int main()
{
	float l,b,area,perimeter;
	printf("Input Length Of Rectangle.\n");
	scanf("%f",&l);
	printf("Input Breadth Of Rectangle.\n");
	scanf("%f",&b);
	area = l*b;
	perimeter = (l+b)*2.0;
	printf("Area Of Rectangle is %.2f.\n",area);
	printf("Perimeter Of Rectangle is %.2f.\n",perimeter);

	return 0;
}

#include <stdio.h>

int main()
{
	int num,power,count,x,y;

	printf("Enter the Number & Raised Power\n");
	scanf("%d %d",&num,&power);
	count = 1;
	y = num;

    while(count<power)
    {
       x=y*num;
       y = x;
       count++;
    }
    printf("%d",y);

	return 0;
}

#include <stdio.h>

int main()
{
	int digit[4],no,t,y,sum;
	printf("Enter Your Five Digit No.\n");
	scanf("%d",&no);
	t = 10;
	for(int i=0;i<5;i++)
	{
		digit[i] = (no%t)/(t/10);
		t = t*10;
	}
	y = 0;
 	for (int j = 0; j < 5; j++)
 	{
		sum = y +digit[j];
		y = sum;
	}
    printf("Sum Of Digits Is %d",sum);
	return 0;
}

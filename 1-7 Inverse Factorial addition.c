#include <stdio.h>
int factorial(int fact);

int main()
{
    int num,in;
    float ratio,sum,p,q=0.0,conversion1,conversion2;
    // int count,x,y;
    
    for(in=1;in<=7;in++)
    {
     /*   //Factorial
        for(num=in,count=num;count>=2;count--)
    {
        y=num;
        x = y*(count-1);
        num = x;
    } 
    */
   num = factorial(in);
   
    printf("%d %d \n",in,num);
    // Data Type Conversion Int to Float
    
    conversion1 = num/1.0;
    conversion2 = in/1.0;

    ratio = conversion2/conversion1;
    p=ratio;
    sum=q+p;
    q=sum;

    }
    printf("Ans Is .. %f",sum);
	return 0;
}

int factorial(int fact)
{
   int temp;
   if (fact==1)
   return (1);
   else
   temp = fact*factorial(fact-1);
   return (temp);
}
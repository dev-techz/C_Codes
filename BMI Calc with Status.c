#include <stdio.h>

int main()
{
    float weight,height,bmi;
    printf("Enter Your Weight In Kilogram\n");
    scanf("%f",&weight);
    printf("Enter Your Height In Meter\n");
    scanf("%f",&height);

    bmi = weight/height/height;

    printf("Your BMI Is %.2f and Status is ",bmi);

    if (bmi<=15)
        printf("Starvation");
    else if ((bmi>=15.10)&&(bmi<=17.50))
        printf("Anorexic");
    else if ((bmi>=17.60)&&(bmi<=18.50))
        printf("Underweight");
    else if ((bmi>=18.60)&&(bmi<=24.90))
        printf("Ideal");
    else if ((bmi>=25.00)&&(bmi<=25.90))
        printf("Overweight");
    else if ((bmi>=26.00)&&(bmi<=30.90))
        printf("Obese");
    else if (bmi<=40.00)
        printf("Morbidly Obese");

	return 0;
}

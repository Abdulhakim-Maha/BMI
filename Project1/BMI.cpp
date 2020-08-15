#include<stdio.h>
int main()
{
	float sung, namnak, BMI;
	printf("Hello,Let's go to check your BMI\n");
	printf("Enter your mass(cm) :  \n");
	scanf_s("%f",&namnak);
	printf("Enter your height(m) : \n");
	scanf_s("%f", &sung);
	BMI = namnak /(sung * sung);
	
	if (BMI < 18.50)
	{
		printf("BMI :%.2f You are thin\n",BMI );
	}
	else if (BMI >= 18.50 && BMI <= 24.99)
	{
		printf("BMI :%.2f You are healty\n",BMI);
	}
	else if (BMI >= 23.00 && BMI <= 24.99)
	{
	    printf("BMI :%.2f Obesity level 1\n",BMI);
    }
	else if (BMI >= 25 && BMI <= 29.99)
	{
		printf("BMI :%.2f Obesity level 2\n", BMI);
	}
	else if (BMI >= 30)
	{
		printf("BMI :%.2f Obesity maximum \n", BMI);
	}
	return 0;
}
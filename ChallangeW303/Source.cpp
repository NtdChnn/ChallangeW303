#include<stdio.h>
int main()
{
	float num1, num2;
	scanf_s("%f %f", &num1, &num2);
	printf("%.2f", (num1 + num2) / 2);
	return 0;
}
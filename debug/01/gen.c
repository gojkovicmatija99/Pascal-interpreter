#include<stdio.h>
int main()
{
	float a;
	float b;
	scanf("%f", &a); 
	scanf("%f", &b);
	printf("%.2f %.2f %.2f", a + b, a - b, a / b);
	return 0;
}

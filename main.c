#include<stdio.h>
void insert(char a, char *b, int position)
{
   char tmp[100];
   strncpy(tmp, b, position);
   tmp[position] = a;
   tmp[position+1]=' ';
   strcat(tmp, b+position);
   puts(tmp);
   b = tmp;
}
int main()
{
	float a;
	float b;
	scanf("%f", &a); 
	scanf("%f", &b);
	printf("%d %d %d", a + b, a - b, a / b);
	return 0;
}

#include<stdio.h>
void insert(char tmp, char* a, int p)
{
    int i=0;
	int t=0;
	int x,g,s,o;
	char c[100], b[100];
	b[0]=tmp;
	b[1]=' ';
	int	r = strlen(a);
	int n = strlen(b);
   	while(i <= r)
	{
		c[i]=a[i];
		i++;
	}
	s = n+r;
	o = p+n;
	for(i=p;i<s;i++)
	{
		x = c[i];
		if(t<n)
		{
			a[i] = b[t];
			t=t+1;
		}
		a[o]=x;
		o=o+1;
	}
}
int main()
{
	float a1;
	float b1;
	float a2;
	float b2;
	float p1;
	float p2;
	scanf("%f", &a1); 
	scanf("%f", &b1); 
	scanf("%f", &a2); 
	scanf("%f", &b2);
	p1 = a1 * b1 / 2;
	p2 = a2 * b2 / 2;
	if(p1 > p2)
	{
		printf("1");
	}
	else
	{
		if(p1 < p2)
		{
			printf("2");
		}
		else
		{
			printf("0");
		}
	}
	return 0;
}

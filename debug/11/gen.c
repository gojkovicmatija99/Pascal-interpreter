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
	int a[100];
	int b[100];
	int c[100];
	int n;
	int ai;
	int bi;
	int ci;
	int i;
	bi = 1;
	ci = 1;
	scanf("%d", &n);
	for(ai = 1; ai <= n; ai++)
	{
		scanf("%d", &a[ai]);
	}
	for(ai = 1; ai <= n; ai++)
	{
		if(a[ai] % 2 == 0)
		{
			b[bi] = a[ai];
			bi = bi + 1;
		}
		else
		{
			c[ci] = a[ai];
			ci = ci + 1;
		}
	}
	for(i = 1; i <= bi - 1; i++)
	{
		printf("%d ", b[i]);
	}
	printf("\n");
	for(i = 1; i <= ci - 1; i++)
	{
		printf("%d ", c[i]);
	}
	return 0;
}

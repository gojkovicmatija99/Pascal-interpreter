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
	int a[1005];
	int n;
	int i;
	int max;
	int x;
	int br;
	for(i = 1; i <= 1005; i++)
	{
		a[i] = 0;
	}
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
	{
		scanf("%d", &x);
		a[x] = a[x] + 1;
	}
	max = -1;
	for(i = 1; i <= 1005; i++)
	{
		if(max < a[i])
		{
			max = a[i];
			br = i;
		}
	}
	printf("%d %d", br, max);
	return 0;
}

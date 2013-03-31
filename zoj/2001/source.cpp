#include <stdio.h>

int reverse(int x);

int main(int argc,char ** argv)
{
	int n = 0,x1 = 0,x2 = 0;
	scanf("%d",&n);
	for(int i = 0;i < n; ++i)
	{
		scanf("%d %d",&x1,&x2);
		printf("%d\n",reverse(reverse(x1) + reverse(x2)));
	}
}

int reverse(int x)
{
	int result = 0;
	while(x != 0)
	{
		result = result * 10 + (x % 10);
		x /= 10;
	}
	return result;
}

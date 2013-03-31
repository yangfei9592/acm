#include <stdio.h>
#include <math.h>

int main(int argc,char ** argv)
{
	
	int a = 0,b = 0,c = 0,index = 0;
	while(true)
	{
		scanf("%d %d %d",&a,&b,&c);
		if(0 == a && 0 == b && 0 == c)
			break;
		++index;
		printf("Triangle #%d\n",index);
		if( -1 == c)
		{
			printf("c = %.3f\n\n",sqrt(a*a + b*b));
		}
		else if(-1 == a && c > b)
		{
			printf("a = %.3f\n\n",sqrt(c*c - b*b));
		}
		else if(-1 == b && c > a)
		{
			printf("b = %.3f\n\n",sqrt(c*c - a*a));
		}
		else
		{
			printf("Impossible.\n\n");
		}
	}
}

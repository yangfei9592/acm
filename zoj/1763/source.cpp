#include <stdio.h>

int main(int argc,char **argv)
{
	float t1 = 0,t2 = 0;
	scanf("%f",&t1);
	scanf("%f",&t2);
	while(t2 < 900)
	{
		printf("%.2f\n",t2 - t1);
		t1 = t2;
		scanf("%f",&t2);
	}
	printf("End of Output\n");
}

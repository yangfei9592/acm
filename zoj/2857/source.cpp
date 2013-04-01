#include <stdio.h>
#include <memory.h>
#include <malloc.h>

int main(int argc,char ** argv)
{
	int m= 0,n = 0,color = 0,index = 0;
	scanf("%d %d",&m,&n);
	while(m && n)
	{
		++index;
		printf("Case %d:\n",index);
		int * matrix = (int *)malloc(sizeof(int) * m * n);
		memset(matrix,0,m * n * sizeof(int));
		for(int count = 0; count < 3; ++count)
		{
			for(int i = 0;i < m; ++i)
				for(int j = 0; j < n; ++j)
				{
					scanf("%d",&color);
					*(matrix + i * n + j) += color;
				}
		}		
		for(int i = 0;i < m; ++i)
		{
			for(int j = 0; j< n; ++j)
			{
				printf((j < n -1)?"%d,":"%d",*(matrix + i * n + j)/3);
			}
			printf("\n");
		}
		delete matrix;
		scanf("%d %d",&m,&n);
	}
	
}

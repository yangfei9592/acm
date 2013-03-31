#include <stdio.h>
#include <string.h>

//http://acm.zju.edu.cn/onlinejudge/showProblem.do?problemId=1885

int main(int argc,char ** argv)
{
	int count = 0;
	scanf("%d",&count);
	for(int i = 0;i < count;++i)
	{
		char str[1001];
		scanf("%s",str);
		char lastdigit = str[0];
		int k = 0;
		int len = strlen(str);
		for(int j = 0;j < len; ++j)
		{
			if(lastdigit == str[j])
				++k;
			else
			{
				printf("%d%c",k,lastdigit);
				k = 1;
			}
			lastdigit = str[j];
		}
		printf("%d%c\n",k,lastdigit);
	}
}

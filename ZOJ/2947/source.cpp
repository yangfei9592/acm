#include <stdio.h>
#include <string.h>

void getAbbreviation(char * str,char * abbreviation);

int main(int argc,char ** argv)
{
	int nTestCase = 0;
	scanf("%d",&nTestCase);
	for(int i = 0;i < nTestCase; ++ i)
	{
		int n1 = 0,n2 = 0;
		char str1[50] = {0};
		char str2[50] = {0};
		char temp[11];
		scanf("%d",&n1);
		for(int j = 0;j < n1;++j)
		{
			scanf("%s",temp);
			strcat(str1,temp);
		}

		scanf("%d",&n2);
		for(int j = 0;j < n2;++j)
		{
			scanf("%s",temp);
			strcat(str2,temp);
		}
		char abbstr1[6] = {0},abbstr2[6] = {0};
		getAbbreviation(str1,abbstr1);
		getAbbreviation(str2,abbstr2);
		if(strcmp(abbstr1,abbstr2) == 0)
		{
			printf("SAME\n");
		}
		else
		{
			printf("DIFFERENT\n");
		}
	} 
}

void getAbbreviation(char * str,char * abbreviation)
{
	int len = strlen(str);
	int n = 0;
	for(int i = 0;i < len;i++)
	{
		if(str[i] >= 'A' && str[i]<= 'Z')
			abbreviation[n++] = str[i];
	}
}

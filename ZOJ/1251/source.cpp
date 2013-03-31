#include <iostream>
#include <stdio.h>
#include <vector>
#include <assert.h>

int main(int argc,char **argv)
{
	int setIndex = 0;
	std::vector<int> v;
	while(true)
	{
		int n = 0;
		scanf("%d",&n);
		if(0 == n) break;
		v.clear();
		setIndex++;
		int sum = 0;
		for(int i = 0;i < n;++i)
		{
			int number = 0;
			scanf("%d",&number);
			v.push_back(number);
			sum += number;
		}
		int average = sum / n;
		int result = 0;
		assert(sum == n * average);
		std::vector<int>::iterator iter;
		for(std::vector<int>::iterator iter = v.begin(); iter != v.end();++iter)
		{
			int value = *iter;
			if(value > average)
				result += (value - average);
		}
		printf("Set #%d\n",setIndex);
		printf("The minimum number of moves is %d.\n\n",result);
	}
}

#include <iostream>

//答案错误，可能是测试用例大于int型范围

int summing(int x);

int main(int argc,char ** argv)
{
	int n = 0;
	while(std::cin >> n)
	{
		if(0 == n) break;
		while(n > 9)
		{
			n = summing(n);			
		}
		std::cout << n << std::endl;
	}
}

int summing(int x)
{
	int sum = 0;
	while(0 != x)
	{
		sum += (x % 10);
		x /= 10;
	}
	return sum;
}
		

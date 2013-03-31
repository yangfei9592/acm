#include <iostream>
#include <string>
#include <sstream>

std::string summing(std::string x);

int main(int argc,char ** argv)
{
	std::string n;
	while(std::cin >> n)
	{
		if("0" == n) break;
		while(n.length() > 1)
		{
			n = summing(n);			
		}
		std::cout << n << std::endl;
	}
}

std::string summing(std::string x)
{
	int sum = 0;
	for(int i = 0;i < x.length(); ++i)
	{
		sum += x[i] - '0';
	}
	std::stringstream ss;
	ss << sum;
	return ss.str();
}
		

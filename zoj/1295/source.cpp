#include <iostream>
#include <string>
#include <algorithm>

int main(int argc,char **argv)
{
	int n = 0;
	std::cin >> n;
	std::string str;
	getline(std::cin,str);
	for(int i = 0;i < n;++i)
	{
		std::getline(std::cin,str);
		reverse(str.begin(),str.end());
		std::cout << str <<std::endl;
	}
}

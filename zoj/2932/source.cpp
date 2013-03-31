#include <stdio.h>
#include <iostream>
#include <string>
#include <map>


int main(int argc,char ** argv)
{
	std::string str;
	std::map<char,std::string> percentTable;
	percentTable[' '] = "%20";
	percentTable['!'] = "%21";
	percentTable['$'] = "%24";
	percentTable['%'] = "%25";
	percentTable['('] = "%28";
	percentTable[')'] = "%29";
	percentTable['*'] = "%2a";
	std::map<char,std::string>::iterator iter;
	while(getline(std::cin,str))
	{
		if(str == "#") break;
		for(int i = 0;i < str.length(); ++i)
		{
			iter = percentTable.find(str[i]);
			if(iter != percentTable.end())
			{
				std::cout << iter->second;
			}
			else
			{
				printf("%c",str[i]);
			}
		}
		std::cout << std::endl;
	}
}

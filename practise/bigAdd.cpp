#include <iostream>
#include <algorithm>

std::string sum(std::string &s1,std::string &s2);

int main(int argc,char ** argv)
{
	std::string s1 = "12345";
	std::string s2 = "23456776654";
	std::cout << sum(s1,s2) <<std::endl;
}

std::string sum(std::string &s1,std::string &s2)
{
	//return s1 + s2;
	std::reverse(s1.begin(),s1.end());
	std::reverse(s2.begin(),s2.end());
	int flag = 0;
	int len1 = s1.length();
	int len2 = s2.length();
	int maxlen = len1 > len2 ? len1 : len2;
	std::string result;
	for(int i = 0; i < maxlen; ++i)
	{
		int c1 = i < len1 ? s1[i] - '0' : 0;
		int c2 = i < len2 ? s2[i] - '0' : 0;
		int sum = (c1 + c2 + flag) % 10;
		flag = (c1 + c2 + flag) / 10;
		char sumstr[] = {0,0};
		sumstr[0] = '0' + sum;
		result.append(sumstr);
	}
	std::reverse(result.begin(),result.end());
	return result;
}

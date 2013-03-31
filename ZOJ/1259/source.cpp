#include <iostream>
#include <vector>

bool testcase(std::vector<int> & vcase);
int main(int argc,char ** argv)
{
	int caseLen = 0,n = 0;
	std::vector<int> vcase;
	while(true)
	{
		std::cin >> caseLen;
		if(0 == caseLen) break;
		while(true)
		{
			vcase.clear();
			for(int i = 0;i< caseLen;++i)
			{
				std::cin >> n;
				if(0 == n) break;
				vcase.push_back(n);
			}
			if(vcase.size() > 0)
			{
				bool result = testcase(vcase);
				std::cout<<(result ? "Yes" : "No")<<std::endl;
			}
			else
				break;
		}
		std::cout << std::endl;
	}
}

bool testcase(std::vector<int> & vcase)
{
	bool result = true;
	for(int i = 0;i<vcase.size();++i)
	{
		int trainnum = vcase[i];
		int temptop = vcase[i];
		for(int j = i + 1; j < vcase.size(); ++j)
		{
			if(vcase[j] < trainnum)
			{
				if(vcase[j] > temptop)
				{
					result = false;
					break;
				}
				temptop = vcase[j];
			}
		}
		if(!result) break;
	}
	return result;
}

#include <iostream>


int sort();
int main(int argc,char ** argv)
{
	std::cout<<__DATE__<<" "<<__TIME__<<std::endl;
	//sort();
	int x = 5^5^3^4^3;
	std::cout<<x<<std::endl;
	return 0;
}





int sort()
{
	int a[] = {1,4,6,4,74,53,64,77,22,44,12};
	int count = sizeof(a)/sizeof(a[1]);
	for(int i = 0; i < count - 1; ++i)
	{
		for(int j = i + 1; j < count ; ++j)
		{
			if(a[i] > a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for(int i = 0; i<count; ++i)
	{
		std::cout<<a[i]<<std::endl;
	}
}
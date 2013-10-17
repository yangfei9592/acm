//class demo
#include <iostream>

class A
{
	int x;
	char y;
public:
	int fun();
};

int A::fun()
{
	std::cout<<"in fun"<<std::endl;
	return 0;
}

int main(int argc,char **argv)
{
	A a;
	a.fun();
	std::cout<<sizeof(a)<<std::endl;
}
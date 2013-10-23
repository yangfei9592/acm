//class demo
#include <iostream>

class A
{
	int x;
	char y;
public:
	A(int x);
	int fun();
	virtual int vfun();
};

int A::fun()
{
	std::cout<<"in fun:x="<<x<<std::endl;
	return 0;
}

int A::vfun()
{
	std::cout<<"in vfun:x="<<x<<std::endl;
	return 0;
}

A::A(int _x)
{
	x = _x;
}

class B:public A
{
	int x;
public:
	B(int);
	int fun();
//	virtual int vfun();
};

B::B(int _x):A(1)
{
	x = _x;
}

int B::fun()
{
	std::cout<<"in class B,x="<<x<<std::endl;
	return 0;
}
int main(int argc,char **argv)
{
	A a(1);
	a.fun();

	B b(3);
	b.vfun();
	b.fun();
	std::cout<<sizeof(a)<<std::endl;
	A * pa = new A(1);
	std::cout<<sizeof(pa)<<std::endl;
}

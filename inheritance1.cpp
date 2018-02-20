#include<iostream>
using namespace std;
class A
{	public:
A()
		{         cout<<"\nIn A's constructor\n"       ;}
};
class B:public A // single inheritance
{	public:  
	B()
		{	cout<<"In B's constructor\n"	;}
};
class C:public B // multilevel inheritance
{	public:
	C()
		{	cout<<"In C's constructor\n";	}
};
class D
{	public:
D()
	{	cout<<"In D's constructor\n";	}
};
class E:public A,public D //multiple inheritance
{	public:
		E()
		{	cout<<"In E's constructor\n";	}
};
int main()
{
cout<<"Single inheritance:\n";
	B b;
	cout<<"\nMultilevel inheritance:\n";
	C c;
	cout<<"\nMuliple inheritance:\n";
	E e;
	return 0;
}


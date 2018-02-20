#include <iostream>
using namespace std;
class A 
{
	int a;
	void b()
	{              cout<<"Private member function of A"<<endl;                        
                                            //private  member function 
	}
	protected:
	void pa()
	{		cout<<"Protected member function of A"<<endl;						//protected member function
	}
	public:
	void pba()
	{
		cout<<"Public member function of A "<<endl;							//public member function
	}
};

class B: private A
{												//Private member function of A cannot be accessed i.e no member is inherited
};

class C: protected A
{													//Protected, public member function of A go to protected of C and private of A to private of //C
};

class D: public A
{													//Protected member function of A go to protected of D and private of A to private of D and //public of A to
													//public of D
};
int main()
{	B b;
	C c;
	D d;
//	B.b();					//display error
//	c.pa();					//display error
	d.pba();
	return 0;
}


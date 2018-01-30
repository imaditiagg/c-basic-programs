using namespace std;
#include<iostream>

class complex
{
	int real;
	int img;
	public:
		complex(int r,int i)
		{
			real=r;
			img=i;
		}
		void display()
		{
			cout<<"Complex number is: "<<real<<"+"<<img<<"i";
		}
		complex operator+(complex c)
		{
			complex temp(0,0);
			temp.real=real+c.real;
			temp.img=img+c.img;
			return temp;
		}
		complex operator-(complex c)
		{
			complex temp(0,0);
			temp.real=real-c.real;
			temp.img=img-c.img;
			return temp;
		}
		complex operator*(complex c)
		{
			complex temp(0,0);
			temp.real=real*c.real;
			temp.img=img*c.img;
			return temp;
		}
};
int main()
{
	complex c1(10,2),c2(20,5);
	cout<<"1st ";
	c1.display();
	cout<<"\n2nd ";
	c2.display();
	complex c3(0,0);
	c3=c1+c2;
	cout<<"\nAfter addition : ";
	c3.display();
	c3=c1-c2;
	cout<<"\nAfter subtraction : ";
	c3.display();
	c3=c1*c2;
	cout<<"\nAfter multiplication : ";
	c3.display();
	return 0;
	
}

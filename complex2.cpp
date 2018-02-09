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
		void operator++()
		{
			real++;
			img++;
		}
		void operator--()
		{
			real--;
			img--;
		}
	};
	
int main()
{
	complex c1(10,2),c2(20,5);
	c1.display();
	cout<<"\n1. Increment by 1";
	cout<<"\n2. Decrement by 1";
	int ch;
	cout<<"\nEnter your choice: ";
	cin>>ch;
	switch(ch)
	{
	case 1:
    ++c1;
	c1.display();
	break;
	
	case 2:
	--c1;
	c1.display();
	break;
	default:
		cout<<"Wrong choice";
	}
	return 0;
}

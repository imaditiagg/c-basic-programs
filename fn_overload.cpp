#include<iostream>
using namespace std;
void area (float side)
{
	cout<<"\nArea of square is : "<<side*side;
}
void area (float l,float b)
{
	cout<<"\nArea of rectangle is : "<<l*b;
}
void perimeter(float side)
{
	cout<<"\nPerimeter of square is :"<<4*side;
}
void perimeter (float l,float b)
{
	cout<<"\nperimeter of rectangle is : "<<2*(l+b);
}
int main()
{
	cout<<"1.Square";
	cout<<"\n2.Rectangle";
	cout<<"\nEnter your choice:";
	int ch;
	cin>>ch;
	
	switch(ch)
	{
		case 1:
			float side;
			cout<<"Enter side of square:";
			cin>>side;
		    area(side);
		    perimeter(side);
		    break;
		case 2:
			float l,b;
			cout<<"Enter length and breadth of rectangle:";
			cin>>l>>b;
			area(l,b);
		    perimeter(l,b);
		    break;
		default:
			cout<<"Oops !! you entered a wrong choice";
			
		
	}
cout<<"\n";	
system("pause");
return 0;
}

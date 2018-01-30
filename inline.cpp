//inline function
#include<iostream>
using namespace std;

inline int sum(int a ,int b)
{
	return a+b;
}

int main()
{
int a,b;
cout<<"Enter value of a and b is : ";
cin>>a>>b;
int c=sum(a,b);	
cout<<"\nsum is: "<<c;
cout<<"\nEnter value of a and b is : ";
cin>>a>>b;
c=sum(a,b);	
cout<<"\nsum is: "<<c;
return 0;
	
}

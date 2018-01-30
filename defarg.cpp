#include<iostream>
using namespace std;
void func1(int a,int b=20,int c=30)
{
	cout<<"\nvalue of a,b and c: "<<a<<" "<<b<<" "<<c;
}
void func2(int a,int b,int c=3)
{
	cout<<"\nvalue of a,b and c: "<<a<<" "<<b<<" "<<c;
}
int main()
{
	func1(10);
	func1(100,200,300);
	func2(1,2);
	func2(1,2,100);
	return 0;
	
}

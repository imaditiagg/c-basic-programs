#include<iostream>
using namespace std;
class truck;
class car
{
	int passenger;
	int speed;
	public:
		car(int p,int s)
		{
			passenger=p;
			speed=s;
		}
		void print()
		{
			cout<<"\nCAR";
			cout<<"\nPassenger : "<<passenger;
			cout<<"\nSpeed : "<<speed;
		}
		int sp_greater(truck t);
};
class truck
{
	int weight;
	int speed;
	public:
		truck(int w,int s)
		{
			weight=w;
			speed=s;
		}
		void print()
		{
			cout<<"\nTRUCK";
			cout<<"\nWeight : "<<weight;
			cout<<"\nSpeed : "<<speed;
		}
		friend int car::sp_greater(truck t);
};

int car::sp_greater(truck t)
{
	return this->speed-t.speed;
}
int main()
{
	car c(5,40);
	truck t(100,50);
	c.print();
	t.print();
	cout<<"\n"<<c.sp_greater(t);
	return 0;
	
}

using namespace std;
#include<iostream>
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
		friend int sp_greater(car c,truck t);
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
		friend int sp_greater(car c,truck t);
		
};
int sp_greater(car c,truck t)
{
	return c.speed-t.speed;
}
int main()
{
	car c(4,50);
	truck t(30,60);
	cout<<sp_greater(c,t);
	return 0;
}

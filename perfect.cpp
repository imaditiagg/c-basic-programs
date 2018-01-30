//perfect no.


#include<iostream>
using namespace std;

int main()
{
	int n=1;
	while(n<=10000)
	{
	int a[n]={0};
	int count=0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
		a[count]=i;
		count++;
	    }
	}
	int sum=0;
	for(int i=0;i<count;i++)
	{
		sum=sum+a[i];
	}
	if(sum==n) //if it is a perfect number
	cout<<n<<" ";
	n++;
    }
    system("pause");
    return 0;
}

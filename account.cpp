#include<iostream>
using namespace std;

class account
{
    string name;
	float balance;
	public:
		int accno;
		void insert();
	    friend void search(int s,account a);
		void modify();
		void print()
		{
			cout<<"\nName: "<<name;
			cout<<"\nAccount no.: "<<accno;
			cout<<"\nBalance: "<<balance;
		}
};
void account::insert()
{
	cout<<"\nEnter name:- ";
	cin>>name;
	cout<<"\nEnter accno:- ";
	cin>>accno;
	cout<<"\nEnter balance:- ";
	cin>>balance;
}
void search(int s,account a)
{
	for(int i=0;i<5;i++)
	{
		if((a.accno)==s)
		{
			cout<<"\nCustomer details:";
		    cout<<"\nName:- "<<a.name;
		    cout<<"\nBalance:- "<<a.balance;
		    break;
		}
	}
}
void account::modify()
{
	cout<<"\nEnter new balance: ";
	cin>>this->balance;
}

int main()
{
	account a[5];
	for(int i=0;i<5;i++)
	{
	cout<<"\nEnter details of  customer"<<i+1<<": ";
	a[i].insert();
    }
    int s;
    cout<<"\nEnter an existing account no. of customer need to be searched: ";
    cin>>s;
    for(int j=0;j<5;j++)
    {
    search(s,a[j]);
    }
    int acc;
    cout<<"\nEnter account no. of customer whose data needs to be modified: ";
    cin>>acc;
    for(int k=0;k<5;k++)
    {
    	if(a[k].accno==acc)
    	a[k].modify();
    }
    cout<<"\nDetails of customer are: ";
    for(int i=0;i<5;i++)
    {
    	a[i].print();
	}

return 0;
}

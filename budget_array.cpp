#include<iostream>
using namespace std;
int main()
{
	int budgets[4],max;
	for(int i=0;i<=4;i++)
	{
		cout<<"Enter value of budget "<<i<<" : ";
		cin>>budgets[i];
	}
	max=budgets[0];
	for(int i=0;i<=4;i++)
	{
		if(budgets[i]>max)
			max=budgets[i];
	}
	cout<<"The maximum budget= "<<max;
}

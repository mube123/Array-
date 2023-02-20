#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int main()
{
	int salary[20];
	int employee;
	cout<<"Enter the number of employee: ";
	cin>>employee;
	for(int i=1;i<=employee;i++)
	{
		cout<<"Enter the salary of employee "<<i<<" : ";
		cin>>salary[i]; 
	}
	
		sort(salary, salary+employee, greater<int>());   
		cout << "Salary Array after sorting : "; 
		for (int i = 1; i <= employee; ++i) 
		cout << salary[i] << " "<<endl;
	
	
}

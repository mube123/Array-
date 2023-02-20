#include<iostream>
using namespace std;
int main()
{
	string names[20];
	int student;
	cout<<"Enter the strength of students: ";
	cin>>student;
	for(int i=1;i<=student;i++)
	{
		cout<<"Enter the name of student "<<i<<" : ";
		cin>>names[i];
	}
	
	for(int i=student;i>=1;i--)
	{
		cout<<"Name of student "<<i<<" : "<<names[i]<<endl;
	}
}

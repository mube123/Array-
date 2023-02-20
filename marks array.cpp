#include<iostream>
using namespace std;
int main()
{
	int marks[20],student;
	cout<<"Enter the strength of students: ";
	cin>>student;
	for(int i=1;i<=student;i++)
	{
		cout<<"Enter the marks of student "<<i<<" : ";
		cin>>marks[i];
	}
	for(int i=1;i<=student;i++)
	{
		cout<<"The marks of student "<<i<<" : "<<marks[i]<<endl;
	}
}

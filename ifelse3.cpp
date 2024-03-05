/*a program for ,when a student marks is greater than 33 ,so it will print 
"you have passed" and when marks is not greater than 33 so it will print "you
are failed" */
#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"enter your marks: ";
	cin>>marks;
	if(marks>33)
	{
		cout<<"you have passed";
	}
	else
	{
		cout<<"You are failed";
	}
}

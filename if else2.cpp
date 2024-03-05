/* a program for checking when a company package is greater than 20 lack
so it will print "Accepted", and if company package is not greater than 20 lack,
so it will print "Rejected" */
#include<iostream>
using namespace std;
int main()
{
	int package;
	cout<<"Enter your package: ";
	cin>>package;
	if(package>20)
	{
		cout<<"Accepted";
	}
	else
	{
		cout<<"Rejected";
	}
	
}


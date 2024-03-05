//if a person's age is greater than 18 ,so it will print"adult" otherwise peint "teenager"
#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter your age: ";
	cin>>age;
	if(age>18)
	{
		cout<<"adult";
	}
	else
	{
		cout<<"teenager";
	}
}

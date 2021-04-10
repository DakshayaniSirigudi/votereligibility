#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"enter your age:";
	cin>>age;
	if(age>=18)
	{
		cout<<"\nYou are eligible to vote";
	}
	else
    {
    	cout<<"\nYou are not eligible to vote"<<"\nyou can wait till you turn 18";
	}
	cout<<"\nThank you";
	return 0;
}

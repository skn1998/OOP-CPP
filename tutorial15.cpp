#include<bits/stdc++.h>
using namespace std;

/*
In Inheritence constructor of the base class is called first after that constructor of the sub class is called.
In Inheritence destructor of the sub class is called first and after that destructor of the base class is called.
*/

class Human
{
	public:
	Human()
	{
		cout<<"Constructor of Human (base class) called."<<endl;	
	}	
	~Human()
	{
		cout<<"Destructor of Human (base class) called."<<endl;	
	}
};

class Student : public Human
{
	public:
	Student()
	{
		cout<<"Constructor of Student (sub class) called."<<endl;	
	}	
	~Student()
	{
		cout<<"Destructor of Student (sub class) called."<<endl;	
	}
};

int main()
{
	Student saurav;
}

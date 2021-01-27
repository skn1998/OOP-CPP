#include<bits/stdc++.h>
using namespace std;

/*
PURE VIRTUAL FUNCTION and ABSTRACT CLASS
1. A virtual function having no body is known as a "pure virtual function".
2. A class having at least one pure virtual function is known as "Abstract Class".
3. VVI: We can not define an object of an Abstract Class.
4. A class that inherits an Abstract class should must define the pure virtual function otheerwise that class will also become Abstract Class.
*/

class Human  // Abstract Class
{
	public:
		virtual void Introduce() = 0;	
};

class Indian : public Human   // Abstract Class
{
	public:
		void TellMeAboutYourself()
		{
			cout<<"Hello! I am an Indian."<<endl;
		}
};

class Student : public Human
{
	public:
		void Introduce()
		{
			cout<<"Hello! I am Student."<<endl;	
		}	
};

int main()
{
	// Human saurav; -->this is not allowed because Human is an Abstract Class.
	// Indian saurav; -->this is not allowed because Indian is also an Abstract Class.	
	Student saurav;
	saurav.Introduce();
}

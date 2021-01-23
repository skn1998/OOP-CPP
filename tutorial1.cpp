#include<bits/stdc++.h>
using namespace std;
/*
A Class is a user defined data-type having it's own data members and member functions, 
and it acts like a blue print for an Object. 

An Object is a variable of type Class.

1. defining a class
class class_name
{
	private: 
		data members
		member functions
		
	public:
		data memebrs
		member functions
	
	protected:
		data members
		member functions	
};

2. private, public and protected are the access specifiers i.e. they define visibility level
3. If nothing mentioned data member or member functions will be considered private
4. to access data member or member function we use "." attribute 
*/

class HumanBeing
{
	public:
		void Introduce()
		{	
			cout<<"I am a Human Being!"<<endl;	
		}
};

int main()
{
	HumanBeing Saurav; // Declaring an Object of type HumanBeing in the stack 
	Saurav.Introduce();
}

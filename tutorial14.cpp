#include<bits/stdc++.h>
using namespace std;

/* 
We can use the "access declaration" in the sub class to change the access level of the data member of member function of the base class
*/
class Human
{	
	protected:
		string name;
		int age;
		
	public:
		void setName(string inp_name = "noname")
		{
			name = inp_name;
		}
		void setAge(int inp_age = -1)
		{
			age = inp_age;
		}
};

class Student : protected Human
{
	int roll;
	
	public:
		Human :: name; // here we are using access declaration to change the access level of name from protected to public
		Human :: age;  // here we are using access declaration to change the access level of age from protected to public
		
		void setRoll(int inp_roll = -1)
		{
			roll = inp_roll;
		}
		
		void Introduce()
		{
			cout<<"Hello! My name is "<<name<<", my age is "<<age<<" and my roll number is "<<roll<<"."<<endl;
		}
};

int main()
{
	Student saurav;
	saurav.name = "Saurav";
	saurav.age = 22;
	saurav.setRoll(49);
	saurav.Introduce();
}

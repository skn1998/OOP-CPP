#include<bits/stdc++.h>
using namespace std;
/*
We can also pass arguments/ call base class constructor from the sub class.
*/
class Human
{
	public:
		string name;
		int age;
		
		Human(string inp_name = "noname", int inp_age = -1)
		{
			cout<<"Human(base class) constructor called."<<endl;
			name = inp_name;
			age = inp_age;
		}
};	

class Student : public Human
{
	public:
		int roll;
		
		Student(int inp_roll = -1, string inp_name = "noname", int inp_age = -1) : Human(inp_name, inp_age)
		{
			cout<<"Student(sub class) constructor called."<<endl;
			roll = inp_roll;
		}	
		
		void Introduce()
		{
			cout<<"Hello! I am "<<name<<" and i am "<<age<<" years old. My roll number is "<<roll<<"."<<endl;
		}
};

int main()
{
	Student saurav(49, "Saurav", 22);
	saurav.Introduce();
}

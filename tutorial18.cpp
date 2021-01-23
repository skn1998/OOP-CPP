#include<bits/stdc++.h>
using namespace std;
/*
We can also pass arguments/ call base class constructors from the sub class in case of multiple inheritence
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

class Student
{
	public:
		string dep;
		
		Student(string inp_dep = "nodep")
		{
			cout<<"Student(base class) constructor called."<<endl;
			dep = inp_dep;
		}	
};

class ChemicalEngineers : public Human, public Student
{
	public:
		int roll;
		
		ChemicalEngineers(int inp_roll = -1, string inp_dep = "nodep", string inp_name = "noname", int inp_age = -1) : Human(inp_name, inp_age) , Student(inp_dep)
		{
			cout<<"ChemicalEngineers(sub class) constructor called."<<endl;
			roll = inp_roll;
		}	
		
		void Introduce()
		{
			cout<<"Hello! I am "<<name<<" and i am "<<age<<" years old. My department is "<<dep<<" and my roll number is "<<roll<<"."<<endl;
		}
};

int main()
{
	ChemicalEngineers saurav(49, "Chemical", "Saurav", 22);
	saurav.Introduce();
}

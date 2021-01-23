#include<bits/stdc++.h>
using namespace std;

/*
1. We can also do multiple inheritence i.e. inheriting from multiple classes.
2. For multiple inheritence we neec to use comma seperated base classses
3. class subclass_name : access_specifier1 baseclass_name1, access_specifier2 baseclass_name2
*/

class Human
{
	public:
		string name;
		int age;	
};

class Student
{
	public:
		string department;
};

class ChemicalEngineers : public Human, public Student
{
	public:
		int roll;
		
		void Introduce()
		{
			cout<<"Hello! I am "<<name<<" and i am "<<age<<" years old. My department is "<<department<<" and my roll is "<<roll<<"."<<endl;
		}
};

int main()
{
	ChemicalEngineers saurav;
	saurav.name = "Saurav";
	saurav.age = 22;
	saurav.department = "chemical";
	saurav.roll = 49;
	saurav.Introduce();
}

#include<bits/stdc++.h>
using namespace std;

/* 
Inheritance is the method to use some predefined class properties(of specified access specification) in a new class.
1. It helps to increase code reusability.
2. It helps to avoid defining similar classes again and again.
3. The class from which we inherit is called the 'base class' and the class in which we inherit is calles 'sub class'.
4. class sub_class_name : access_specifier base_class_name
6. Private data memmers and member functions are never inherited.
7. If we are using public inheritence --> public of base class will remain public in sub class and protected of base class will remain protected in subclass.
8. If we are using private inheritence --> both public and protected of base class will become private in sub class.
9. If we are using protected inheritence --> both public and protected of base class will become protected in sub class.
*/

class Human // base class
{
	public:
		string name;
		int age;
		
		void setName(string inp_name = "noname")
		{
			name = inp_name;
		}	
		void setAge(int inp_age = -1)
		{
			age = inp_age;
		}
};

class Student : public Human // it means that Student is inheriting all the public properties of Human and keeping in public // sub class
{
	public:
		int roll;
		void setRoll(int inp_roll = -1)
		{
			roll = inp_roll;
		}
		
		void StudentIntroduce()
		{
			cout<<"Hello! I am "<<name<<" and i am "<<age<<" years old and my roll number is "<<roll<<"."<<endl;
		}
};

int main()
{
	Student saurav;
	saurav.setName("Saurav");
	saurav.setAge(22);
	saurav.setRoll(49);
	saurav.StudentIntroduce();
}

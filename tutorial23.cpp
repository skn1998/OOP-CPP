#include<bits/stdc++.h>
using namespace std;
/*
Run time polymorphism - Virtual Functions

note - Even if we inherit a class that has inherited the class having a virtual function. The virtual nature gets inherited too.
 
*/
class Human
{
	public:
		virtual void speak()
		{
			cout<<"Human is speaking."<<endl;
		}
};

class Student : public Human
{
	public:
		void speak()
		{
			cout<<"Student is speaking."<<endl;
		}
};

class ChemicalStudent : public Student
{
	public:
		void speak()
		{
			cout<<"Chemical Student is speaking."<<endl;
		}
};

void LetsSpeak(Human &h)  // Do not forget to receive as reference
{
	h.speak();
}

int main()
{
	Human saurav;
	Student ravi;
	ChemicalStudent nishant;
	LetsSpeak(saurav);
	LetsSpeak(ravi);
	LetsSpeak(nishant); 
}

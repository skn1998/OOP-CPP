#include<bits/stdc++.h>
using namespace std;
/*
POLYMORPHISM - many forms
1. Polymorphism can be classified into two categories : Compile Time and Run Time.
2. Compile Time Polymorphism can be achieved using Function Overloading and Operator Overloading.
3. Run Time Polymorphism is achieved using virtual functions.
*/

// Run time polymorphism - Virtual Functions
class Human
{
	public:
		virtual void speak()
		{
			cout<<"Human is speaking."<<endl;
		}
		void sing()
		{
			cout<<"Human is singing."<<endl;
		}
};

class Student : public Human
{
	public:
		void speak()
		{
			cout<<"Student is speaking."<<endl;
		}
		void sing()
		{
			cout<<"Student is singing."<<endl;
		}
};

void LetsSpeak(Human &h)  // Do not forget to receive as reference
{
	h.speak();
}

void LetsSing(Human &h)  // Do not forget to receive as reference
{
	h.sing();
}

int main()
{
	Student saurav;
	LetsSpeak(saurav);
	LetsSing(saurav);
	
	Human nishant;
	LetsSpeak(nishant);
	LetsSing(nishant);
}

#include<bits/stdc++.h>
using namespace std;

/*
1. We can define a function in the sub class having same return type, same name, same arguments as that of one in the base class.
2. In this case the method in the base class will get overridden by the method in the subclass. 
3. To call the overridden base class method we can use scope resolution operator.
4. We can aslo call the base class method inside the sub class method using svoe resolution operator.
5. We can also call the base calss method by receiving the argument of type base class.
*/

class Human
{
	public:
		void Introduce()
		{
			cout<<"Hello! I am a Human."<<endl;
		}
};

class Student : public Human
{
	public:
		void Introduce()
		{
			cout<<"Hello! I am a Student."<<endl;
			Human :: Introduce(); // calling base class method from inside the class method.
		}	
};

void WhoseThis(Human h) // here we are receiving saurav as of type Human instead of Person
{
	h.Introduce(); // since here saurav is of type human, Introduce of Human will get called
}

int main()
{
	Student saurav;
	saurav.Introduce();
	saurav.Human :: Introduce();  // calling base class overridden method.
	WhoseThis(saurav);
}

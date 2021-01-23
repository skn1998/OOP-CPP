#include<bits/stdc++.h>
using namespace std;

/*
1. private - not accessible or viewed from ourside the class can only be accessed inside the class
2. public - accessible or viewed from outside the class

We generally define all our data members in private and all the member functions in public
*/

class Human
{
	int age; // private 
	
	public:
		string name;
		void setAge(int num)
		{
			age = num;
		}
		void Introduce()
		{
			cout<<"Hi! I am "<<name<<" and my age is "<<age - 3<<"."<<endl;
		}
};

int main()
{
	Human saurav;
	saurav.name = "Saurav";
	saurav.setAge(22);
	saurav.Introduce();
}


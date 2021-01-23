#include<bits/stdc++.h>
using namespace std;

// How to define Member functions outside the class using "scope resolution operator" i.e. "::".
// Note that we can only define "member functions" and "static members" of the class outside the class.
// Define all the methods of the class before creating any object.

class Human
{
	public:
		string name = "noname"; // Assigning the default value
		void Introduce();	
};

void Human :: Introduce()
{
	cout<<"Hi! I am "<<Human :: name<<endl;
}

int main()
{
	Human saurav;
	saurav.name = "Saurav";
	saurav.Introduce();
	Human nishant;
	nishant.Introduce();
}

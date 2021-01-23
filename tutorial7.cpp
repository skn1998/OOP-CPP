#include<bits/stdc++.h>
using namespace std;

/* If we don't want to define the default constructor we can pass default parameters in the function */

class Human
{
	string name;
	int age;
	
	public:
		Human(string inp_name = "noname", int inp_age = 0) // passing default parameter to avoid defining default Constructor
		{
			name = inp_name;
			age = inp_age;	
		}	
		
		void Introduce()
		{
			cout<<"Hello! I am "<<name<<" my age is "<<age<<"."<<endl;
		}
};

int main()
{
	Human saurav;
	saurav.Introduce();
	
	Human nishant("Nishant");
	nishant.Introduce();
	
	Human ravi("Ravi", 22);
	ravi.Introduce();
}

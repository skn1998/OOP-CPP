#include<bits/stdc++.h>
using namespace std;

// We can overload the constructor also like normal functions 
/* If we are overloading the construtors then we also need to define the default constructor with no parameter */  

class Human
{
	string name;
	int age;
	
	public:
		Human()
		{
			cout<<"This is the default constructor."<<endl;	
			name = "noname";
			age = 0;
		}	
		Human(string inp_name)
		{
			cout<<"This is the constructor with given input name."<<endl;	
			name = inp_name;
			age = 0;
		}
		Human(int inp_age)
		{
			cout<<"This is the constructor with given input age."<<endl;	
			name = "nonale";
			age = inp_age;
		}
		Human(string inp_name, int inp_age)
		{
			cout<<"This is the constructor with given input name and input age."<<endl;	
			name = inp_name;
			age = inp_age;
		}
		void Introduce()
		{
			cout<<"Hello! I am "<< name<<" with age "<<age<<"."<<endl;
		}
};

int main()
{
	Human ravi;
	ravi.Introduce();
	
	Human nishant("Nishant");
	nishant.Introduce();
	
	Human saurav(22);
	saurav.Introduce();
	
	Human javed("Javed", 23);
	javed.Introduce();
}

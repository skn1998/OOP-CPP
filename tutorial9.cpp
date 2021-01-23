#include<bits/stdc++.h>
using namespace std;

/* We can use constructor to allocater memory and destructor to delete the memory */

class Human
{
	string *name;
	int *age;
	
	public:
		Human(string inp_name, int inp_age)
		{
			name = new string;
			age = new int;
			
			*name = inp_name;
			*age = inp_age;
			cout<<"Memory created."<<endl;
		}	
		
		~Human()
		{
			delete name;
			delete age;
			cout<<"Memory cleared."<<endl;
		}
		
		void Introduce()
		{
			cout<<"Hello! my name is "<<*name<<" and my age is "<<*age<<"."<<endl;
		}
};

int main()
{
	Human *ravi = new Human("Ravi", 22);
	ravi->Introduce();
	delete ravi;
}

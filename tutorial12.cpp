#include<bits/stdc++.h>
using namespace std;

/* 
1. As we know that private data members and member functions can not be accessed from outside the class.
2. But we can define a friend function of a class. 
3. This friend function will have access to all the data members and member functions of the class.
*/

class Human
{
	string name;
	int age;
	
	public:
		Human(string inp_name = "noname", int inp_age = 0)
		{
			name = inp_name;
			age = inp_age;
		}	
		
		friend void Introduce(Human man); // prototype of a friend function 
};

// defining the friend function
void Introduce(Human man)
{
	cout<<"Hello! My name is "<<man.name<<" and my age is "<<man.age<<"."<<endl;
}

int main()
{
	Human saurav("Saurav", 22);
	Introduce(saurav);
	Human ravi;
	Introduce(ravi);
}

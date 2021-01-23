#include<bits/stdc++.h>
using namespace std;

/*
1. Constructor is a member function that gets automatically called when an object is created.
2. Constructor is always public.
3. We can not call constructor in any other way. It is only called when we create an object.
4. We can also create the constructor outside the class using scope resolution operator.
5. We can also pass arguments/default arguments to the constructors but it does not rturn anything.
*/

class Human
{
	private:
		string name;
		int age;
	
	public:
		Human()
		{
			name = "noname";
			age = 0;
		}
		
		void Introduce()
		{
			cout<<"Hello! I am "<<name<<" and my age is "<<age<<"."<<endl;
		}
};

int main()
{
	Human saurav;
	saurav.Introduce();
}

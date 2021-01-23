#include<bits/stdc++.h>
using namespace std;

/*
We can also use static member functions in a class. It starts with the static keyword.
1. Only static variables can be manupulated inside the static method.
2. Static method is unique for all the member/ object of that class similar to static variables.
3. We can call static method using Class name and Scope Resolution Operator.
*/

class Human
{
	public:
		static int count;
		
		Human()
		{
			count+=1;	
		}	
		
		static void NumberOfMembers()
		{
			cout<<"We have "<<count<<" members added till now."<<endl;
		}
};

int Human :: count = 0;

int main()
{
	Human ravi;
	Human saurav;
	Human nishant;
	Human :: NumberOfMembers();
}

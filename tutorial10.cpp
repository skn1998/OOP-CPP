#include<bits/stdc++.h>
using namespace std;

/* We can use static variable to keep a track of the number of objects created.
1. The static variable initialization takes place only once.
2. We can not initialize the static variable inside the class we need to do it outside the class.
3. Use score resolution operator to initialize the static variable outside the class.
4. We can only initilize the static variables outside the class.   
*/

class Human
{
	public:
		static int count;  // static variable
		Human()
		{
			count+=1;	
		}	
		
		void NumberOfMembers()
		{
			cout<<"We have "<<count<<" members."<<endl; 
		}
};

int Human :: count = 0;  // initializing the static variable outside the class

int main()
{
	Human ravi;
	Human saurav;
	Human nishant;
	ravi.NumberOfMembers();
	cout<<"Cross verifying the count which should be "<<Human :: count<<"."<<endl;
}

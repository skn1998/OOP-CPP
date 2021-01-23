#include<bits/stdc++.h>
using namespace std;

/*
1. Similar to a constructor we have destructor.
2. A destructor is called when the allocated memort for an object gets erased.
3. We can not pass any argument to the destructor.
4. We can also define destructor outside the class using scope resolution operator.
5. We can neither pass nor get any return value from a destructor.
*/

class Human
{	
	public:
		Human() // constructor
		{
			cout<<"Constructor called."<<endl;
	    }
	    
	    ~Human() // destructor
	    {
	    	cout<<"Destructor called."<<endl;
		}
};

int main()
{
	Human *ravi = new Human[sizeof(Human)];
	delete ravi;
}

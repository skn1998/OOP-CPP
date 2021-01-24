#include<bits/stdc++.h>
using namespace std;

/*
1. this pointer - this pointer holds the address of the current object when we call any (non - static) member function for any object.
2. this pointer is available locally inside the function.
3. this pointer is not available for static member functions and in friend functions. 
4. it gets implicitally used inside the member function but we can also use it explicitally if needed.
*/

class Human
{
	int age;
	public:
		void setAge(int age) // local variable name is same as that of data member name 
		{
			this->age = age; // or *(this).age = age;
		}
		void showAge()
		{
			cout<<"My age is "<<age<<"."<<endl;
		}
};

int main()
{
	Human saurav;
	saurav.setAge(22);
	saurav.showAge();
}

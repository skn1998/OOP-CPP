#include<bits/stdc++.h>
using namespace std;

/*
POLYMORPHISM - many forms
1. Polymorphism can be classified into two categories : Compile Time and Run Time.
2. Compile Time Polymorphism can be achieved using Function Overloading and Operator Overloading.
3. Run Time Polymorphism is achieved using virtual functions.
*/

// Compile time polymorphism - Function Overloading

class Number
{
	public:
		void num()
		{
			cout<<"No number obtained."<<endl;
		}
		void num(int x)
		{
			cout<<"Number obtained is "<<x<<"."<<endl;
		}
		void num(int x, int y)
		{
			cout<<"Numbers obtained are "<<x<<" and "<<y<<"."<<endl;
		}
};

int main()
{
	Number n;
	n.num();
	n.num(34);
	n.num(12, 24);
}

#include<bits/stdc++.h>
using namespace std;

// COMPILE TIME POLYMORPHISM - Operator overloading //
/* 
1. When we overload an operator its actual meaning is not lost. 
2. We can not overload all the operators like object accessing operator(.), scope resolution operator (::) etc.
*/
class Complex
{
	public:
		int real;
		int imag;
		
		void show()
		{
			cout<<real<<" + i"<<imag<<endl;
		}
		
		friend Complex operator + (Complex a, Complex b);			  
};

Complex operator + (Complex a, Complex b)
{
	Complex temp;
	temp.real = a.real + b.real;
	temp.imag = a.imag + b.imag;
	return temp;
}

int main()
{
	Complex a, b;
	a.real = 3;
	a.imag = 4;
	b.real = 7;
	b.imag = 1;
	
	Complex c = a + b;
	c.show();
}



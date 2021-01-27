#include<bits/stdc++.h>
using namespace std;

// NESTED CLASS (class inside a class)

class Human
{
	public:
		string name;
		int age;
		
		class Address // only accessible from Human
		{
			public:
				string country;
				string state;
				int house_number;
		};
		
		Address ad;
		
		void Introduce()
		{
			cout<<"Hello! I am "<<name<<" and I am "<<age<<" years old."<<endl;
			cout<<"Country : "<<ad.country<<endl;
			cout<<"State : "<<ad.state<<endl;
			cout<<"House Number : "<<ad.house_number<<endl;
		}
};

int main()
{
	// Address ad;   --->this will show an error 
	Human saurav;
	saurav.name = "Saurav";
	saurav.age = 22;
	saurav.ad.country = "India";
	saurav.ad.state = "Bihar";
	saurav.ad.house_number = 150;
	saurav.Introduce();
}


#include<bits/stdc++.h>
using namespace std;

class HumanBeing
{
	public:
		string name;
		void Introduce()
		{
			cout<<"Hi! I am "<<name<<endl;	
		}	
};

int main()
{
	// In the stack
	
	HumanBeing saurav;
	HumanBeing nishant;
	saurav.name = "Saurav";
	nishant.name = "Nishant";
	saurav.Introduce();
	nishant.Introduce();
	
	// In the Heap using new operator (DYNAMIC MEMORY ALLOCATION)
	
	HumanBeing *ravi = new HumanBeing[sizeof(HumanBeing)];
	ravi->name = "Ravi";
	ravi->Introduce();
	
	HumanBeing *javed = new HumanBeing[sizeof(HumanBeing)];
	(*javed).name = "Javed";
	(*javed).Introduce();
	
}

#include<iostream>
using namespace std;

void counterfun()
{
	static int count = 0;
	count++;
}

int main()
{
	int i, n = 100;
	for(i=0;i<n;i+=1)
	{
		counterfun();
	}
	cout<<count<<endl;
}

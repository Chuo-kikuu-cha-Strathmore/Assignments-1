#include <iostream>
using namespace std;

int main()
{
	//unsigned overflow
	int a;
	a = 5000000000;
	cout<<a<<endl;
 
	//signed underflow
	int b;
	b = -33000;
	cout<<b<<endl;
	
	return 0;
}

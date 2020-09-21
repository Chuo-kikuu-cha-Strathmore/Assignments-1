#include <iostream>
using namespace std;

int main()
{
	short t;
	
	//unsigned overflow
	t = 70000;
	cout<<t<<endl;
	
	//signed underflow
	short b;
	b = -33000;
	cout<<b<<endl;
	
	return 0;
}

// меняем числа.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b;
	c=a;
	a=b;
	b=c;
	cout<<a<<"  "<<b;
	return 0;
}


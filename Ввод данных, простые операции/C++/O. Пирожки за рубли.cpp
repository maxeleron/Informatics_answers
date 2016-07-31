// пирожки за рубли.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
using namespace std;


int main()
{
	int a,b,n;
	cin>>a>>b>>n;
	cout<<n*a+(n*b-n*b%100)/100<<" "<<n*b%100;
	return 0;
}


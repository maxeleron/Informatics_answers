// K. Watch.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
using namespace std;

int main()
{
	int m;
	cin>>m;
	m=m%1441;
	cout<<m/60<<" "<<m%60;	
	return 0;
}


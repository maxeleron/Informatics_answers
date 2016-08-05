// F. Максимум из трех.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	cout<<max(a,max(b,c));
	return 0;
}


// E. Боль Маль Числа.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	if (a>b) cout<<"1";
	if (a==b) cout<<"0";
	if (a<b) cout<<"2";
	system("pause");
	return 0;
}


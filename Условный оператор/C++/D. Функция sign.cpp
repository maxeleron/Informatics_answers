// D. Функция sign.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
using namespace std;

int main()
{
	int x;
	cin>>x;
	if (x>0) cout<<"1";
	if (x==0) cout<<"0";
	if (x<0) cout<<"-1";
	system("pause");
	return 0;
}


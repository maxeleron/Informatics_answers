// M. Фишки.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
using namespace std;

int main()
{
	int k;
	cin>>k;
	if (((k%4==0)&&(k>=4))||(k==1)) cout<<"YES";
	else cout<<"NO";
	system("pause");
	return 0;
}


// Q. Мороженное.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
using namespace std;

int main()
{	int k;
	cin>>k;
	if ((k!=1)&&(k!=2)&&(k!=4)&&(k!=7)){
		cout<<"YES";
	}
	else cout<<"NO";
	system("pause");
	return 0;
}


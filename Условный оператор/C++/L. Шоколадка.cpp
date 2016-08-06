// L. Шоколадка.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
using namespace std;

int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	if (k<m*n){
		if ((k%n==0)||(k%m==0)) cout<<"YES";
		else cout<<"NO";
	}
	else cout<<"NO";
	system("pause");
	return 0;
}


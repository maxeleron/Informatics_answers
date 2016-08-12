// B. Факториал.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
using namespace std;

int main()
{	int n;
	cin>>n;
	for(int i=n-1; i>=1; i--){
	n*=i;
	}
	cout<<n;
	system("pause");
	return 0;
}


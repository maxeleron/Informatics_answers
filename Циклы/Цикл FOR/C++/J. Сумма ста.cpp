// J. Сумма ста.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
using namespace std;

int main()
{	
	int a,s=0;
	for(int i=1; i<=100;i++){
		cin>>a;
		s+=a;
	}
	cout<<s;
	system("pause");
	return 0;
}


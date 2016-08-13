// E. Геометрическая прогрессия.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{	double a,n,s=0;
	cin>>a>>n;
	for(double i=0; i<=n; i++){
		s+=pow(a,i);
	}
	cout<<s;
	system("pause");
	return 0;
}


// P. Уравнение по возростанию.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
using namespace std;

int main()
{	double a , b , c , d ;
	cin >> a >> b >> c >> d;
 	for (int i = 0; i <= 1000 ; i++){
		if ( a*i*i*i + b*i*i + c*i + d == 0) cout<< i <<endl;
	}
	system("pause");
	return 0;
}


// T. Существует ли треугольник.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
using namespace std;

int main()
{	
	int a,b,c;
	cin>>a>>b>>c;
	if((a+b>c)&&(a+c>b)&&(c+b>a)) cout<<"YES";
	else cout<<"NO";
	system("pause");
	return 0;
}


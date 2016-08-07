// P. Товар или Сдача.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
using namespace std;

int main()
{
	int a,b,c,d,e,f,ch;
	e=0;
	f=0;
	cin>>a>>b>>c>>d;
	ch=(c*100+d)-(a*100+b);
	if (ch>0) f=ch%100, e=(ch-f)/100;
	cout<<e<<" "<<f;
	system("pause");
	return 0;
}


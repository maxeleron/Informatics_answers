// B. ToUpper.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

void parne(char &c){
	if ((c >= 97) && (c <= 122))
		c = c - 32;
	cout<<c;
}

int main ()
{
	char c;
	cin>>c;
	parne(c);
	system("pause");
	return 0;
}
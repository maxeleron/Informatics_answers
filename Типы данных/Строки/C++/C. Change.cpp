// C. Change.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

void change(char &c){
	if ((c >= 97) && (c <= 122))
		c = c - 32;
	else if ((c >= 65) && (c <= 90))
		c = c + 32;
	cout<<c;
}

int main ()
{
	char c;
	cin>>c;
	change(c);
	system("pause");
	return 0;
}
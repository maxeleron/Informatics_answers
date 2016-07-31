// десятки в любом числе.cpp: определяет точку входа для консольного приложения.
//


#include <iostream>
using namespace std;

int main()
{
	int a;
	cin>>a;
	cout<<((a%100)-a%10)/10;
	return 0;
}


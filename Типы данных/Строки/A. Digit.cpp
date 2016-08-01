// A. Digit.cpp: определяет точку входа для консольного приложения.
//


#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

bool digit(char &c){
	for (int i=48; i<=57; i++){
		if(c==i) return true;
	}

	return false;
	
}

int main()
{
	char c;
	bool a;
	cin>>c;
	a = digit(c);
	if(a) cout<<"yes";
	else cout<<"no";

	system("pause");
	return 0;
}


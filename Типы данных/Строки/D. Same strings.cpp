// D. Same strings.cpp: определяет точку входа для консольного приложения.
//


#include <iostream>
#include <cmath>
#include <cstdio>
#include <string>
using namespace std;

bool checkStrings(string &c1,string &c2){
	
	if(c1==c2) return true;
	else return false;
}

int main ()
{
	string c1;
	string c2;
	cin>>c1;
	cin>>c2;
	bool result = checkStrings(c1,c2);
	if (result) cout<<"yes";
	else cout<<"no";
	system("pause");
	return 0;
}
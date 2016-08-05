// B. Высокостный год.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
using namespace std;

int main()
{
	int y;
	cin>>y;
	if (((y%4==0)&&(y%100!=0))||(y%400==0)) cout<<"YES"<<endl;
	else  cout<<"NO"<<endl;
	system("pause");
	return 0;
}


// AC. Четные и нечетные.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
using namespace std;

int main()
{
	int a,b,c,p,n=0;
	p=0;
	cin>>a;
	(a%2==0)? p++ : n++;
	cin>>b;
	(b%2==0)? p++ : n++;
	cin>>c;
	(c%2==0)? p++ : n++;
	if((p>0)&&(n>0)) cout<<"YES";
	else cout<<"NO";
	system("pause");
	return 0;
}


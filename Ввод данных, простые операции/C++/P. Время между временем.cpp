#include <iostream>

using namespace std;

int main()
{
	int h1,h2,m1,m2,s1,s2;
	cin>>h1>>m1>>s1>>h2>>m2>>s2;
	cout<<((h1*3600+m1*60+s1)-(h2*3600+m2*60+s2))*-1;
	system("pause");
	return 0;
}


// U.  оличество равных из трех.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include <iostream>
using namespace std;

int main()
{
	int a,b,c,n;
	cin>>a>>b>>c;
	if((a==b)||(b==c)||(c==a)){
		n=(a==b)+(b==c)+(c==a);
		if(n==1) n=2; 
		cout<<n;
	}
	else cout<<0;
	system("pause");
	return 0;
}


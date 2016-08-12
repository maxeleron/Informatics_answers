// R.  оличество решений.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include <iostream>
using namespace std;

int main()
{	double a , b , c , d, e, n=0;
	cin >> a >> b >> c >> d >> e;
 	for (int i=1000; i>=0 ; i--){
		if ( (a*i*i*i + b*i*i + c*i + d)/(i-e) == 0) n++;
	}
	cout<<n;
	system("pause");
	return 0;
}
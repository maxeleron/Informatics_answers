// C.  вадраты.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{	
	float in;
	int a,b;
	cin>>a>>b;
	for(double i=a; i<=b; i++){
		in=sqrt(i);
		if (in*in==i) cout<<i<<endl;
	}
	system("pause");
	return 0;
}


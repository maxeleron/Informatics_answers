// V.  вадратное уравнение.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a,b,c,d,x1,x2;
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	if (d>=0)
	{
		x1=(-b+sqrt(d))/(2*a);
		cout<<x1;
		if (d>0)
		{
			x2=(-b-sqrt(d))/(2*a);
			cout<<" "<<x2;
		}
	}
	else{
	;;
	}
	system("pause");
	return 0;
}


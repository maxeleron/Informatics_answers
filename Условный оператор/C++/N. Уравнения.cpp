// N. Рівняння.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
using namespace std;


int main()
{
	int a,b;
    cin>>a>>b;
    if ((a==0) && (b==0)) cout<<"INF";
	else{
		if ((a==0) || ((b%a)!=0))
			cout<<"NO";
		else
			cout<<(-1*b)/a;
	}
	return 0;
}

 
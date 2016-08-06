// J. Король.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	int x,y,x1,y1;
	cin>>x>>y>>x1>>y1;
	if (((abs(x-x1)==1)||(x==x1))&&((abs(y-y1)==1)||(y==y1))) cout<<"YES";
	else cout<<"NO";
	system("pause");
	return 0;
}


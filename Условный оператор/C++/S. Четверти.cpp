// S. „верти.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include <iostream>
using namespace std;


int main()
{	
	int x1,y1,x2,y2,c1,c2;
	cin>>x1>>y1>>x2>>y2;
	c1=((x1>0)&&(y1>0))*1 + ((x1<0)&&(y1>0))*2 + ((x1<0)&&(y1<0))*3 + ((x1>0)&&(y1<0))*4;
	c2=((x2>0)&&(y2>0))*1 + ((x2<0)&&(y2>0))*2 + ((x2<0)&&(y2<0))*3 + ((x2>0)&&(y2<0))*4;
	if (c1==c2) cout<<"YES";
	else cout<<"NO";
	system("pause");
	return 0;
}


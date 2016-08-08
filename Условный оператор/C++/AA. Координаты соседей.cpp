// AA.  оординаты соседей.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include <iostream>
using namespace std;

int main()
{
	int x1,y1,x,y;
	cin>>x1>>y1>>x>>y;
 	if (x!=1) cout<<x-1<<" "<<y<<endl;
	if (x!=x1) cout<<x+1<<" "<<y<<endl;
	if (y!=1) cout<<x<<" "<<y-1<<endl;
	if (y!=y1) cout<<x<<" "<<y+1<<endl;
	system("pause");
	return 0;
}


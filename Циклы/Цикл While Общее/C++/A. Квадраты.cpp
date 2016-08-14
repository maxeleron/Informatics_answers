// A.  вадраты.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int N;
	cin>>N;
	int i=1;
	while(i<=N){
		float y;
		y=sqrt((float)i);
		int x=y;
		if (x==y) cout<<i<<endl;
		i++;	
	}
	system("pause");
	return 0;
}


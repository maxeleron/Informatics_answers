// I.  оличество делителей.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include <iostream>
using namespace std;

int main()
{	
	int x,n=0;
	cin>>x;
	for(int i=1; i<=x; i++){
		if (x%i==0) n++;
	}
	cout<<n<<endl;
	system("pause");
	return 0;
}


// €блоки.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include <iostream>
using namespace std;


int main()
{

	int n,k;
	cin>>n>>k;
	cout<<(k-k%n)/n;
	system("pause");
	return 0;
}


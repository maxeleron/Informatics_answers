
#include <iostream>

using namespace std;

int main()
{
	int n,k,q;
	cin>>n>>k;
	q=(((k-k%n)/n)+(k%n>0))*n;
	cout<<q-k;
	system("pause");
	return 0;
}


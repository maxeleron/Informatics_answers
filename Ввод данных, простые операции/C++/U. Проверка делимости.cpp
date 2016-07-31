

#include <iostream>
using namespace std;

int main()
{
	int m,n,c;
	cin>>m>>n;
	cout<<(((m%n)==0)!=((n%m)==0))+(m==n) ;//==((n%m)==0);
	
	return 0;
}


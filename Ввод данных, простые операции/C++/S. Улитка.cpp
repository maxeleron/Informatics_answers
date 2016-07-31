
#include <iostream>
using namespace std;

int main()
{
	int h,a,b;
	cin>>h>>a>>b;
	cout<<((h-a)-((h-a)%(a-b)))/(a-b)+1+(((h-a)%(a-b))>0);
	return 0;
}


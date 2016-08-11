// O. Ноль или не ноль.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
using namespace std;

int main()
{	
	int a,n,nul=0;
	cin>>n;
	for(int i=1; i<=n;i++){
		cin>>a;
		if(a==0)	nul++;
	}
	if (nul>0) cout<<"YES";
	else cout<<"NO";
	system("pause");
	return 0;
}

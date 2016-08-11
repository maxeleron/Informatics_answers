// N. Подсчет чисел.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
using namespace std;

int main()
{	
	int a,n,nul=0;
	int plus=0;
	int minus=0;
	cin>>n;
	for(int i=1; i<=n;i++){
		cin>>a;
		if(a==0)	nul++;
		if(a>0)	plus++;
		if(a<0)	minus++;
	}
	cout<<nul<<" "<<plus<<" "<<minus<<endl;
	system("pause");
	return 0;
}


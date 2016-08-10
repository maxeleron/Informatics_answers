// A. Четные числа.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
using namespace std;

int main()
{	
	int a,b;
	cin>>a>>b;
	for(int i=a; i<=b; i++){
		if (i%2==0) cout<<i<<endl;
	}
	system("pause");
	return 0;
}


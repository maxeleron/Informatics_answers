// H. Делители числа.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
using namespace std;

int main()
{	
	int x;
	cin>>x;
	for(int i=1; i<=x; i++){
		if (x%i==0) cout<<i<<endl;
	}
	system("pause");
	return 0;
}


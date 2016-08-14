// D. Точная степень.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int N;
	cin>>N;
	int i=1;
	while(i<N){
		i*=2;
	}

	if (i==N) cout<<"YES";
	else cout<<"NO";
	system("pause");
	return 0;
}

// C. Степени.cpp: определяет точку входа для консольного приложения.
//


#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int N;
	cin>>N;
	int i=1;
	while(i<=N){
		cout<<i<<endl;
		i*=2;
	}
	system("pause");
	return 0;
}

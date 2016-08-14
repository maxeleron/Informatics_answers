// B. Делитель.cpp: определяет точку входа для консольного приложения.
//


#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int N;
	cin>>N;
	int i=2;
	while(N%i>0){
		i++;
	}
	if (N%i==0) cout<<i;
	system("pause");
	return 0;
}

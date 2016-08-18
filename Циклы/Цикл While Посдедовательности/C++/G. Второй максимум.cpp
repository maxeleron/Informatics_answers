// G. Второй максимум.cpp: определяет точку входа для консольного приложения.
//
#include <iostream>

using namespace std;

int main()
{
	int i=-1;
	int max=0;
	int secondMax=0;
	while(i!=0){
		cin>>i;
		if(i!=0 && i>max){
			secondMax = max;
			max = i;
		}
		if(i>secondMax && i<max) secondMax=i;
	}
	cout<< secondMax;
	system("pause");
	return 0;
}
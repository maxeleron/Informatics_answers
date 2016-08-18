// J. Сумма последовательности - 2.cpp: определяет точку входа для консольного приложения.
//


#include <iostream>

using namespace std;

int main()
{
	int i=-1;
	int preI=-1;//previousI
	int summ=0;
	while(true){
		cin>>i;
		summ+=i;
		if(i==0 && preI==0) break;
		preI=i;
	}
	cout<< summ;
	system("pause");
	return 0;
}
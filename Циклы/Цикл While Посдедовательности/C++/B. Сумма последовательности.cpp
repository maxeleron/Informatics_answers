// B. Сумма последовательности.cpp: определяет точку входа для консольного приложения.
//


#include <iostream>

using namespace std;

int main()
{
	int i=-1;
	int summ=0;
	while(i!=0){
		cin>>i;
		if(i!=0) summ+=i;
	}
	cout<< summ;
	system("pause");
	return 0;
}


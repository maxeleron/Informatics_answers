// A. Длинна последовательности.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>

using namespace std;

int main()
{
	int i=-1;
	int counter=0;
	while(i!=0){
		cin>>i;
		if(i!=0) counter++;
	}
	cout<< counter;
	system("pause");
	return 0;
}


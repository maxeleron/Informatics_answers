// K. Подряд.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>

using namespace std;

int main()
{
	int i=-1;
	int previousI=0;
	int maxLength=0;
	int counter = 1;
	while(i!=0){
		cin>>i;
		if(previousI==i) counter++;
		else counter=1;
		if(counter>maxLength) maxLength = counter;
		previousI=i;
	}
	cout<< maxLength;
	system("pause");
	return 0;
}
// C. Среднее значение.cpp: определяет точку входа для консольного приложения.
//


#include <iostream>

using namespace std;

int main()
{
	int i=-1;
	double summ=0;
	double counter=0;
	double average;
	while(i!=0){
		cin>>i;
		if(i!=0){ 
			summ+=i;
			counter++;
		}
	}
	average = summ/ counter;
	cout<< average;
	system("pause");
	return 0;
}
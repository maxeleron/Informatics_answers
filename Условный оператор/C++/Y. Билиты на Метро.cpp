// Y. Билиты на Метро.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
using namespace std;

int main()
{
	const int rub1 = 15, rub10 = 125, rub60 = 440;
	int n, k1, k10, k60;
	cin >> n;
	k60=n/60;
	n=n%60;
	k10=n/10;
	k1=n%10;
	if (k1*rub1 > rub10){
		k1=0;
		k10++;
	}
	if ((k1*rub1+k10*rub10)>rub60){
    k1=0;
    k10=0;
    k60++;
	}
	cout<<k1<<" "<<k10<<" "<<k60;
	system("pause");
	return 0;
}


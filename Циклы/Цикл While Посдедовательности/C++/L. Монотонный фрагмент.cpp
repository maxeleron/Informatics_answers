// L. Монотонный фрагмент.cpp: определяет точку входа для консольного приложения.
//


#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int i=-1;
	int preI=-1;//previousI
	int cUp=0;//counter up
	int cDown=0;//counter Down
	int max=0;

	while(i!=0){
		cin>>i;
		if (i!=0 && i<preI && preI!=-1){
			if (cDown==0) cDown=2;
			else cDown++;
			cUp=0;
		}
		if (i!=0 && i>preI && preI!=-1){
			if (cUp==0) cUp=2;
			else cUp++;
			cDown=0;
		}
		preI=i;
		if (cUp>max || cDown>max){
			if (cUp>max) max=cUp;
			if (cDown>max) max=cDown;
		}
	}
	
	cout<< max;
	system("pause");
	return 0;
}
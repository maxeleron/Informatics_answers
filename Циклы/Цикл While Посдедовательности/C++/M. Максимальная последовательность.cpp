// M. ћаксимальна€ последовательность.cpp: определ€ет точку входа дл€ консольного приложени€.
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
	int max=1;

	while(i!=0){
		cin>>i;
		if (i!=0 && i<preI){
			if (cDown==0) cDown=2;
			else cDown++;
			cUp=0;
		}
		if (i!=0 && i>preI ){
			if (cUp==0) cUp=2;
			else cUp++;
			cDown=0;
		}
		preI=i;
		if (cUp>max || cDown>max){
			if (cUp>max) max=cUp;
			else if (cDown>max) max=cDown;
		}
	}
	
	cout<< max;
	system("pause");
	return 0;
}
// E. Максимум.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>

using namespace std;

int main()
{
	int i=-1;
	int max=0;
	int counter=0;
	while(i!=0){
		cin>>i;
		if(i!=0 && i>max)
			max=i;
	}
	cout<< max;
	system("pause");
	return 0;
}
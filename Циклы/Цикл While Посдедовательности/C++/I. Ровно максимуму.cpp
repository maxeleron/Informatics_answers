// I. ����� ���������.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include <iostream>

using namespace std;

int main()
{
	int i=-1;
	int max=0;
	int counterMax=1;
	while(i!=0){
		cin>>i;
		if(i==max) counterMax++;
		if(i!=0 && i>max){
			max = i;
			counterMax=1;
		}
		
	}
	cout<< counterMax;
	system("pause");
	return 0;
}
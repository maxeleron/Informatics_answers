// E. ��������.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int N;
	cin>>N;
	int i=1;
	int x=0;
	while(i<N){
		i*=2;
		x++;
	}
	cout<<x;
	
	system("pause");
	return 0;
}

// N. ����� ������.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include <iostream>
using namespace std;

int main()
{
	int n,m;
	cin>>n;
	m=540 + (n==1)*45 + (n==2)*95 +(n==3)*155 + (n==4)*205 + (n==5)*265 +(n==6)*315 +(n==7)*375 +(n==8)*425 +(n==9)*485 + (n==10)*535;
	cout<<  m/60 <<" "<<m%60 ;
	system("pause");
	return 0;
}


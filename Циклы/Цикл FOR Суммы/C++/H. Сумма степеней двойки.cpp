// H. ����� �������� ������.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include <iostream>
using namespace std;

int main()
{
	int n,step=1;
	int s=1;
	cin>>n;
	for(int i=1; i<=n; i++){
		step*=2;
		s+=step;
	}
	cout<<s;
	system("pause");
	return 0;
}

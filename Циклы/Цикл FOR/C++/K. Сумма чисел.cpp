// K. ����� �����.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include <iostream>
using namespace std;

int main()
{	
	int a,n,s=0;
	cin>>n;
	for(int i=1; i<=n;i++){
		cin>>a;
		s+=a;
	}
	cout<<s;
	system("pause");
	return 0;
}


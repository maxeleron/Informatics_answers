// M. ����.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include <iostream>
using namespace std;

int main()
{	
	int a,n,nul=0;
	cin>>n;
	for(int i=1; i<=n;i++){
		cin>>a;
		if(a==0)	nul++;
	}
	cout<<nul;
	system("pause");
	return 0;
}


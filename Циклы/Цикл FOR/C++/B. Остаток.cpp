// B. �������.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include <iostream>
using namespace std;

int main()
{	
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	for(int i=a; i<=b; i++){
		if (i%d==c) cout<<i<<endl;
	}
	system("pause");
	return 0;
}



// T. ���������� �� �����������.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include <iostream>
using namespace std;

int main()
{	
	int a,b,c;
	cin>>a>>b>>c;
	if((a+b>c)&&(a+c>b)&&(c+b>a)) cout<<"YES";
	else cout<<"NO";
	system("pause");
	return 0;
}


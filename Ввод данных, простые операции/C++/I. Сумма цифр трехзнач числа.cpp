// ���� ���� �������� �����.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include <iostream>
using namespace std;

int main()
{
	int a;
	cin>>a;
	cout<<(a-a%100)/100+(a%100-a%10)/10+a%10;
	return 0;
}




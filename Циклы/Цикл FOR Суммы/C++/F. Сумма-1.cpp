// F. �����-1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include <iostream>
using namespace std;

int main()
{	
	int n;
	double s=0;
	cin>>n;
	for(double i=1.0;i<=n;i++){
		s+=1/(i*i);
	}
	cout<<s;
	system("pause");
	return 0;
}


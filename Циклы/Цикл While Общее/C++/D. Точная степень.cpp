// D. ������ �������.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int N;
	cin>>N;
	int i=1;
	while(i<N){
		i*=2;
	}

	if (i==N) cout<<"YES";
	else cout<<"NO";
	system("pause");
	return 0;
}

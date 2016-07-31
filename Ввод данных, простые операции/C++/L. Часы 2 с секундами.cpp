
#include <iostream>
using namespace std;

int main()
{
	int n,h,m,m1,m2,sec,sec1,sec2;
	cin>>n;
	h=(n%86400-n%3600)/3600;
	m=((n-n%60)/60)%60;
	m1=(m-m%10)/10;
	m2=m%10;
	sec=n%60;
	sec1=(sec-n%10)/10;
	sec2=n%10;
	cout<<h<<":"<<m1<<m2<<":"<<sec1<<sec2<< endl;
	system("pause");
	return 0;
}


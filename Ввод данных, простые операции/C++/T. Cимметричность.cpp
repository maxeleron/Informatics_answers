
#include <iostream>
using namespace std;

int main()
{	
	int a,b,c,m,r;
	cin>>a>>r;
	b=(a-a%100)/100;
	c=(a%100-a%10)/10+(a%10)*10;
	m=(b==c);
	if (m==1){
		if(r==1) cout<<"YES";
		else cout<<"NO";
	}
	if (m==0){
		if(r==1) cout<<"NO";
		else cout<<"NO";
	}
	system("pause");

	return 0;

}


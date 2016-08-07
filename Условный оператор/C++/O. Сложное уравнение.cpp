// O. Складне рывняння.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
using namespace std;

int main()
{	int a,b,c,d,result;
	cin>>a>>b>>c>>d;
	if ((a==0)&&(b==0)) cout<<"INF";
	else{
		if ((a==0)||((b%a)!=0)||((c*(-b/a)+d)==0)){
			cout<<"NO";
		}
		else{
			result=-b/a;
			cout<<result;
		}
	}
	system("pause");
	return 0;
}


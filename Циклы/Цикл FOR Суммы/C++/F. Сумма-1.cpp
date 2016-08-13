// F. Сумма-1.cpp: определяет точку входа для консольного приложения.
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


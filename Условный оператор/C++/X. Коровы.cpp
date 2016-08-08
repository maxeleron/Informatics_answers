// X. Коровы.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	if ((n%10==1)&&(n!=11)) cout<<n<<" korova";
	else {
		if ((n%10>=2)&&(n%10<=4)&&(n!=12)&&(n!=13)&&(n!=14)) cout<<n<<" korovy";
		else cout<<n<<" korov";
}
	system("pause");
	return 0;
}


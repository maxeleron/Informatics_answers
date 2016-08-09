// AB. Апельсины бочками.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	if ((n%10==1)&&(n%100!=11)) cout<<n<<" bochka";
	else {
		if ((n%10>=2)&&(n%10<=4)&&(n%100!=12)&&(n%100!=13)&&(n%100!=14)) cout<<n<<" bochki";
		else cout<<n<<" bochek";
}
	system("pause");
	return 0;
}


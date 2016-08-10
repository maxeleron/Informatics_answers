// G. Ќаименьший делитель.cpp: определ€ет точку входа дл€ консольного приложени€.
//


#include <iostream>
using namespace std;

int main()
{	
	int x;
	cin>>x;
	for(int i=2; i>0; i++){
		if (x%i==0) {
			cout<<i<<endl;
			i=-100;

		}
	}
	system("pause");
	return 0;
}


// AD. Римская система счисления.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
using namespace std;

int main()
{
	int x,des,chis;
	cin>>x;
	chis=x%10;
	des=x/10;
	if(des>0){
		switch(des){
			case 1: 
				cout<<"X";
				break;
			case 2: 
				cout<<"XX";
				break;
			case 3: 
				cout<<"XXX";
				break;
			case 4: 
				cout<<"XL";
				break;
			case 5: 
				cout<<"L";
				break;
			case 6: 
				cout<<"LX";
				break;
			case 7: 
				cout<<"LXX";
				break;
			case 8: 
				cout<<"LXXX";
				break;
			case 9: 
				cout<<"XC";
				break;
			case 10: 
				cout<<"C";
				break;
		}
	}
	if(chis>0){
		switch(chis){
			case 1: 
				cout<<"I";
				break;
			case 2: 
				cout<<"II";
				break;
			case 3: 
				cout<<"III";
				break;
			case 4: 
				cout<<"IV";
				break;
			case 5: 
				cout<<"V";
				break;
			case 6: 
				cout<<"VI";
				break;
			case 7: 
				cout<<"VII";
				break;
			case 8: 
				cout<<"VIII";
				break;
			case 9: 
				cout<<"IX";
				break;
			
		}
	}
	system("pause");
	return 0;
}


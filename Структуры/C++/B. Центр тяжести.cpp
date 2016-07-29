// B. Центр тяжести.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
#include <vector>

using namespace std;

struct point
{
	int x;
	int y;
};

int main()
{
	int size;
	cin>>size;
	vector<point> arr;
	arr.resize(size);
	for(int i=0; i<size; i++){
		cin>>arr[i].x;
		cin>>arr[i].y;
	}
	double sumX = 0;
	double sumY = 0;
	for(int i=0; i<size; i++){
		sumX += arr[i].x;
		sumY += arr[i].y;
	}
	
	cout<<sumX/size<<endl;
	cout<<sumY/size;
	system("pause");
	return 0;
}
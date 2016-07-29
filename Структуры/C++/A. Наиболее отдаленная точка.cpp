// A. Наиболее отдаленная точка.cpp: определяет точку входа для консольного приложения.
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
	vector<long long int> result;
	arr.resize(size);
	result.resize(size);
	for(int i=0; i<size; i++){
		cin>>arr[i].x;
		cin>>arr[i].y;
		result[i]=arr[i].x*arr[i].x + arr[i].y*arr[i].y;
	}
	long long int max = result[0];
	int index = 0;
	for(int i=1; i<size; i++){
		if(result[i]>max){
			max = result[i];
			index = i;
		}
	}

	cout<<arr[index].x<<endl;
	cout<<arr[index].y;
	system("pause");
	return 0;
}


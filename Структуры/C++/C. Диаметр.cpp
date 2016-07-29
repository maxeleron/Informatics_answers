// C. Диаметр.cpp: определяет точку входа для консольного приложения.
//

#include <iostream> 
#include <vector> 
#include <cmath> 
using namespace std; 

struct Point 
{ 
	int x; 
	int y; 
}; 

int main() 
{ 
	int n; 
	double max=0, sum=0; 
	cin>>n; 
	vector<Point>arr; 
	arr.resize(n); 
	for(int i=0; i<n; i++) 
	cin>>arr[i].x>>arr[i].y; 
	for(int i=0; i<n; i++) 
		for(int j=1; j<n; j++) 
		{ 
			double s = (arr[i].x-arr[j].x)*(arr[i].x-arr[j].x)+(arr[i].y-arr[j].y)*(arr[i].y-arr[j].y);
			sum=((double)sqrt(s)); 
			if(sum>max) 
				max=sum; 
		} 
	cout<<max; 
	return 0; 
}
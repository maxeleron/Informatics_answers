// D. Сортировка точек.cpp: определяет точку входа для консольного приложения.
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
	vector<Point> arr; 
	arr.resize(n); 
	for(int i=0; i<n; i++) 
		cin>>arr[i].x>>arr[i].y; 
	for(int j=1; j<n; j++) 
		for(int i=0; i<n-j; i++) {
			double s1 = (arr[i].x*arr[i].x)+(arr[i].y*arr[i].y);
			double s2 = (arr[i+1].x*arr[i+1].x)+(arr[i+1].y*arr[i+1].y);
			if(s1>s2) 
			{ 
				swap(arr[i].x, arr[i+1].x); 
				swap(arr[i].y, arr[i+1].y); 
			} 
		}
	for(int i=0; i<n; i++) 
		cout<<arr[i].x<<" "<<arr[i].y<<endl; 
	return 0; 
}
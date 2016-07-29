// Задача F. Max площадь.cpp: определяет точку входа для консольного приложения.
//

#include<vector> 
#include<iostream> 
#include<cmath> 
#include <algorithm> 
using namespace std; 

struct point 
{ 
	double x; 
	double y; 
}; 


int main() 
{ 

	int n; 
	cin >> n; 
	vector<point> arr; 
	arr.resize(n); 
	for (int i = 0; i < n; i++) 
	cin >> arr[i].x >> arr[i].y; 
	double S = 0; 

	for (int i = 0; i < n; i++) 
	for (int j = 0; j < n; j++) 
	for (int m = 0; m < n; m++) 
	{ 
		double a = sqrt((arr[i].x - arr[j].x)*(arr[i].x - arr[j].x) + (arr[i].y - arr[j].y)*(arr[i].y - arr[j].y)); 
		double b = sqrt((arr[i].x - arr[m].x)*(arr[i].x - arr[m].x) + (arr[i].y - arr[m].y)*(arr[i].y - arr[m].y)); 
		double c = sqrt((arr[m].x - arr[j].x)*(arr[m].x - arr[j].x) + (arr[m].y - arr[j].y)*(arr[m].y - arr[j].y)); 
		double p = (a + b + c) / 2; 
		if (sqrt(p*(p - a)*(p - b)*(p - c))>S) 
		S = sqrt(p*(p - a)*(p - b)*(p - c)); 

	} 
	cout << S << endl; 
	system("pause"); 
	return 0; 
}
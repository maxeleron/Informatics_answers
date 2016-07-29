// Задача E. Max периметр.cpp: определяет точку входа для консольного приложения.
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
	vector<point>arr; 
	arr.resize(n); 
	for (int i = 0; i < n; i++) 
	cin >> arr[i].x >> arr[i].y; 
	double P = 0; 
	for (int i = 0; i < n; i++) 
	for (int j = 0; j < n; j++) 
	for (int m = 0; m<n; m++) 
	if (sqrt((arr[i].x - arr[j].x)*(arr[i].x - arr[j].x) + (arr[i].y - arr[j].y)*(arr[i].y - arr[j].y)) + sqrt((arr[i].x - arr[m].x)*(arr[i].x - arr[m].x) + (arr[i].y - arr[m].y)*(arr[i].y - arr[m].y)) + sqrt((arr[m].x - arr[j].x)*(arr[m].x - arr[j].x) + (arr[m].y - arr[j].y)*(arr[m].y - arr[j].y))>P) 
	P = sqrt((arr[i].x - arr[j].x)*(arr[i].x - arr[j].x) + (arr[i].y - arr[j].y)*(arr[i].y - arr[j].y)) + sqrt((arr[i].x - arr[m].x)*(arr[i].x - arr[m].x) + (arr[i].y - arr[m].y)*(arr[i].y - arr[m].y)) + sqrt((arr[m].x - arr[j].x)*(arr[m].x - arr[j].x) + (arr[m].y - arr[j].y)*(arr[m].y - arr[j].y)); 
	cout << P << endl; 
	system("pause"); 
	return 0; 
}
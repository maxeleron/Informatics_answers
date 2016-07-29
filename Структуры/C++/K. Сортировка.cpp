// Задача K. Сортуваня.cpp: определяет точку входа для консольного приложения.
//

#include <iostream> 
#include <vector> 
#include <string> 
#include <algorithm> 
using namespace std; 

struct Student 
{ 
	string surname; 
	string name; 
	int math; 
	int	physics; 
	int	info; 
	double average; 
}; 

bool less_by_mark(Student arr1, Student arr2) 
{ 
	if (arr1.average > arr2.average) 
		return true; 
	return false; 
} 

void sortFunc(vector<Student> &list) 
{ 
	stable_sort(list.begin(), list.end(), less_by_mark); 
} 

int main() 
{ 
	int n, ind = 0; 
	double max = 0; 
	cin >> n; 
	vector<Student> arr; 
	arr.resize(n); 

	for (int i = 0; i<n; i++) 
		cin >> arr[i].surname >> arr[i].name >> arr[i].math >> arr[i].physics >> arr[i].info; 
	
	for (int i = 0; i<n; i++) 
		arr[i].average = (double)(arr[i].math + arr[i].physics + arr[i].info) / 3; 
	sortFunc(arr); 

	for (int i = 0; i<n; i++) 
		cout << arr[i].surname << " " << arr[i].name << endl; 
	return 0; 
}
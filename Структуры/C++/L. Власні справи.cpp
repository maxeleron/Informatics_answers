// Задача L. Власні справи.cpp: определяет точку входа для консольного приложения.
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
	int group; 
	string group_letter; 
	string data; 
}; 

bool less_by_group(Student arr1, Student arr2) 
{ 
	if (arr1.group < arr2.group) 
		return true; 
	else if(arr1.group == arr2.group&&arr1.group_letter < arr2.group_letter) 
		return true; 
	else 
		return false; 
} 

void sortGroup(vector<Student> &list) 
{ 
	stable_sort(list.begin(), list.end(), less_by_group); 
} 

bool less_by_surname(Student arr1, Student arr2) 
{ 
	if (arr1.surname < arr2.surname&&arr1.group == arr2.group&&arr1.group_letter == arr2.group_letter) 
		return true; 
	return false; 
} 

void sortSurname(vector<Student> &list) 
{ 
	stable_sort(list.begin(), list.end(), less_by_surname); 
} 

int main() 
{ 
	int n; 
	cin >> n; 
	vector<Student> arr; 
	arr.resize(n); 

	for (int i = 0; i<n; i++) 
		cin >> arr[i].surname >> arr[i].name >> arr[i].group >> arr[i].group_letter >> arr[i].data; 
	
	sortGroup(arr); 
	sortSurname(arr); 

	for (int i = 0; i < n; i++) 
		cout << arr[i].group << arr[i].group_letter << " " << arr[i].surname << " " << arr[i].name << " " << arr[i].data << endl; 
	return 0; 
}
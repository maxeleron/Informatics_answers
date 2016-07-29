// Задача G. Средний балл.cpp: определяет точку входа для консольного приложения.
//
	
#include <iostream> 
#include <vector> 
#include <cmath> 
#include <string>
using namespace std; 

struct pupils 
{ 
	string LastName; 
	string FirstName;
	int math;
	int phisic;
	int inform;
}; 

int main() 
{ 
	double size;
	double summMath=0;
	double summPhisic = 0;
	double summInform = 0;
	cin>>size;
	vector<pupils> arr; 
	arr.resize(size);

	for(int i=0; i<size; i++) 
		cin>>arr[i].LastName>>arr[i].FirstName>>arr[i].math>>arr[i].phisic>>arr[i].inform;
		
	//for(int i=0; i<size; i++) 
		//cout<<arr[i].LastName<<arr[i].FirstName<<arr[i].math<<arr[i].phisic<<arr[i].inform;

	for(int i=0; i<size; i++) {
		summMath+=arr[i].math;
		summPhisic+=arr[i].phisic;
		summInform+=arr[i].inform;
	
	}
	cout<<summMath/ size<<endl;
	cout<<summPhisic/ size<<endl;
	cout<<summInform/ size<<endl; 

	/*for(int j=1; j<n; j++) 
		
	for(int i=0; i<n; i++) 
		cout<<arr[i].x<<" "<<arr[i].y<<endl; */
	system("pause");
	return 0; 
}
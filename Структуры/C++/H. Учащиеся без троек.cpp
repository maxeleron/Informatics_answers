// Задача H. Учащиеся без троек.cpp: определяет точку входа для консольного приложения.
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
	cin>>size;
	vector<pupils> arr; 
	arr.resize(size);

	for(int i=0; i<size; i++) 
		cin>>arr[i].LastName>>arr[i].FirstName>>arr[i].math>>arr[i].phisic>>arr[i].inform;
		
	for(int i=0; i<size; i++) {
		if(arr[i].math>3 && arr[i].phisic>3 && arr[i].inform>3)
			cout<<arr[i].LastName<<" "<<arr[i].FirstName<<endl;
	}

	system("pause");
	
	return 0; 
}
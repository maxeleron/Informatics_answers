// Задача I. Лучшие учащиеся.cpp: определяет точку входа для консольного приложения.
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
	double summ=0;
	double max;
	cin>>size;
	vector<pupils> arr; 
	vector<double> average;
	average.resize(size);
	arr.resize(size);

	for(int i=0; i<size; i++) 
		cin>>arr[i].LastName>>arr[i].FirstName>>arr[i].math>>arr[i].phisic>>arr[i].inform;
		
	max = (arr[0].math + arr[0].phisic + arr[0].inform)/3;

	for(int i=0; i<size; i++){
		summ = arr[i].math + arr[i].phisic + arr[i].inform;
		average[i]=summ/3;
		if (average[i]>max) max = average[i];
		summ = 0;
	}

	for(int i=0; i<size; i++) {
		if(average[i]==max)
			cout<<arr[i].LastName<<" "<<arr[i].FirstName<<endl;
	}

	system("pause");
	
	return 0; 
}
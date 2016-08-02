// M. Конвертирование.cpp: определяет точку входа для консольного приложения.
//

	
#include<string> 
#include<iostream> 
#include <algorithm> 
using namespace std; 


int main() 
{ 
	string word,word2; 
	cin >> word; 
	int i, j; 
	cin >> i >> j; 
	if (i == j) 
	{ 
		cout << word; 
		system("pause"); 
		return 0; 
	} 
	for (int k = i; k <= j; k++) 
		word2 += word[k-1]; 
	std::reverse(word2.begin(), word2.end()); 
	int q = 0; 
	for (int k = i; k <= j; k++,q++) 
		word[k-1] = word2[q]; 
	cout << word; 
	system("pause"); 
	return 0; 

}
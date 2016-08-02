// N. Удали пробелы.cpp: определяет точку входа для консольного приложения.
//

	
#include<string> 
#include<iostream> 
#include <algorithm> 
using namespace std; 


int main() 
{ 
	string word,word2; 
	getline(cin,word); 
	int l = word.length(); 
	word2 += word[0]; 
	for (int i = 1; i < l;i++) 
		if (!(word[i] == ' ' && word[i] == word[i - 1]))  
			word2 += word[i]; 
	cout << word2; 
	system("pause"); 
	return 0; 
}
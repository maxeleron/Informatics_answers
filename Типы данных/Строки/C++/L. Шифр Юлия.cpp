// Шифр Юлия.cpp: определяет точку входа для консольного приложения.
//

#include<string> 
#include<iostream> 

using namespace std; 


int main() 
{ 
string word,word2; 
int k; 
cin >> word; 
word2 = word; 
cin >> k; 
int l = word.length(); 
for (int i = 0; i < l; i++) 
{ 
	word[i] = (int)word[i] - k; 
	if (word[i] < 65){ 
		word2[i] = (int)word[i] + 26; 
		word[i] = word2[i]; 
	} 
} 
cout << word; 


system("pause"); 
return 0; 

}
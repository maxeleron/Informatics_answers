// E. Количество слов.cpp: определяет точку входа для консольного приложения.
//

#include<string> 
#include<iostream> 

using namespace std; 


int main() 
{ 
string S1; 
getline(cin, S1); 
int counter = 0; 
int L = S1.length(); 
for (int i = 0; i < L; i++) 
	if (S1[i] == ' ') 
		counter++; 
	 
cout << counter + 1; 
system("pause"); 
return 0; 
}
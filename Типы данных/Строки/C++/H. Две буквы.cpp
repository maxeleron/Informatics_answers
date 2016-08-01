// H. Две буквы.cpp: определяет точку входа для консольного приложения.
//

#include<string> 
#include<iostream> 

using namespace std; 


int main() 
{ 
string s; 
getline(cin, s); 
int l = s.length(); 
char b; 
for (int i = 0; i < l; i++) 
	for (int j=i+1; j < l; j++) 
		if (s[i] == s[j]) 
			b = s[i]; 

cout <<b; 
system("pause"); 
return 0; 

}
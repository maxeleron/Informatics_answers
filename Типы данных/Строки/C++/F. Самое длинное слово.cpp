// F. Самое длинное слово.cpp: определяет точку входа для консольного приложения.
//

#include<string> 
#include<iostream> 

using namespace std; 


int main() { 
string maxWord,s1,a; 
maxWord = " "; s1 = ""; 
getline(cin, a); 
int l = 0, n = 0, max = 0; 
l = a.length(); 
for (int i = 0; i < l; i++) 
{

	if (a[i] != ' ') 
	{ 

		s1 += a[i]; 
		n++; 
	} 
	if (n > max) 
	{ 
		maxWord = s1; 
		max = n; 

	} 
	if (a[i] == ' ') 
	{ 
		n = 0; 
		s1 = ""; 
	} 
} 
if (n > max) 
{ 
	maxWord = s1; 
	max = n; 
	n = 0; 
	s1 = " "; 
} 

cout << maxWord << endl << max; 

system("pause"); 
return 0; 

}
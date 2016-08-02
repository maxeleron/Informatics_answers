// K. Строка палиндром.cpp: определяет точку входа для консольного приложения.
//

#include<string> 
#include<iostream> 

using namespace std; 


int main() 
{ 
bool polindrom = true; 
string str; 
getline(cin, str); 
int l = str.length(); 
for (int i = 0; i < l; i++) 
{ 
	if (str[i] == ' '){ 
	str.erase(i, 1); 
	l--; 
	i--; 
	} 
} 
for (int i = 0; i < l && polindrom == true; i++) 
	if (str[i] != str[l - 1 - i]) 
		polindrom = false; 


if (polindrom) cout<<"yes";
else cout<<"no";

system("pause"); 
return 0; 

}
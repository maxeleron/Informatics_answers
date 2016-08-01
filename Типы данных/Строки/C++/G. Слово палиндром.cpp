// G. Слово палиндром.cpp: определяет точку входа для консольного приложения.
//

#include<string> 
#include<iostream> 

using namespace std; 

int main() 
{ 
string s; 
getline(cin, s); 
int l = s.length(); 
bool t = true; 
for (int i = 0; i < l; i++) 
{ 
	if (s[i] != s[l - i - 1]) {
		t = false; 
		break; 
	}
} 
if (t) cout << "yes"; 
else cout << "no"; 

system("pause"); 
return 0; 

}
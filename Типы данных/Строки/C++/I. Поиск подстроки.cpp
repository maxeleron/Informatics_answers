// I. Поиск подстроки.cpp: определяет точку входа для консольного приложения.
//

#include<iostream> 
#include<string> 

using namespace std; 

int main() 
{ 
string str1; 
string str2; 
getline(cin, str1); 
getline(cin, str2); 
size_t pos = str2.find(str1); 
if (pos != string::npos)  
	cout<<"yes"; 
else 
	cout<<"no"; 

system("pause"); 
return 0; 
}
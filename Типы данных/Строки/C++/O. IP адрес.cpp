// O. IP адрес.cpp: определяет точку входа для консольного приложения.
//

	
#include<string> 
#include<iostream> 
#include <algorithm> 
using namespace std; 


int main() 
{ 
string ip,num; 
bool t; 
int tocki[3]; 
int p = 0; 
getline(cin,ip); 
int n1, n2, n3, n4; 
int l = ip.length(); 
for (int i = 0; i < l; i++) 
{ 
	if (ip[i] == '.') 
	{ 
		tocki[p] = i; 
		p++; 
	} 
} 
if (ip[0] == '.' || ip[l-1] == '.'){ t = false; cout << t; system("pause"); return 0; } 
if ((int)tocki[1] - (int)tocki[0] == 1 || (int)tocki[2] - (int)tocki[1] == 1){ t = false; cout << t; system("pause"); return 0; } 
for (int i = 0; i < tocki[0]; i++) // Pervoe cislo 
{ 
	num += ip[i]; 
} 
n1 = atoi(num.c_str()); 
num = ""; 
if (n1 >= 0 && n1 <= 255) 
	t = true; 
else t = false; 
 
if (t) 
{ 
	for (int i = tocki[0]; i < tocki[1]; i++) // Vtoroe cislo 
	{ 
	if (i == tocki[0])
		i++; 
	num += ip[i]; 
	} 
	n2 = atoi(num.c_str()); 
	num = ""; 
	if (n2 >= 0 && n2 <= 255) 
		t = true; 
	else t = false;

	if (t) 
	{ 
		for (int i = tocki[1]; i < tocki[2]; i++) // Tretie cislo 
		{
		if (i == tocki[1])
			i += 1; 
		num += ip[i]; 
		}
	n3 = atoi(num.c_str()); 
	num = ""; 
	if (n3 >= 0 && n3 <= 255) 
	t = true; 
	else t = false; 
	if (t) 
	{ 
		for (int i = tocki[2]; i < l; i++) // Cetvertoe cislo 
		{ 
			if (i == tocki[2]){ 
			i += 1; 
			} 
		num += ip[i]; 
		} 

	n4 = atoi(num.c_str()); 
	num = ""; 
	if (n4 >= 0 && n4 <= 255) 
		t = true;  
	else t = false; 
	} 
} 
} 
if (t)	cout << 1; 

else cout << 0; 
system("pause"); 
return 0; 

}
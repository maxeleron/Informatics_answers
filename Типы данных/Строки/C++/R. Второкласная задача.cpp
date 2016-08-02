// Second grade task.cpp: определяет точку входа для консольного приложения.
//

#include<string> 
#include<iostream> 
#include <algorithm> 
using namespace std; 


int main() 
{ 
string num; 
long long c = 0; 
getline(cin, num); 
long long l = num.length(); 
for (int i = 0; i < l; i++) 
{ 
	if (num[i] == '0') 	c ++; 
	if (num[i] == '6') 	c ++; 
	if (num[i] == '8') 	c += 2;  
	if (num[i] == '9')	c ++; 
} 
cout << c; 
system("pause"); 
return 0; 

}
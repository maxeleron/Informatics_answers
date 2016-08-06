// K.Конь.cpp: определяет точку входа для консольного приложения.
//

#include <iostream> 
using namespace std;
 
int main() { 
int x, y, x1, y1; 
int i=0; 
cin>>x>>y>>x1>>y1;
if ( (x+2==x1) && (y+1==y1) ) i++; 
if ( (x+1==x1) && (y-2==y1) ) i++; 
if ( (x-2==x1) && (y-1==y1) ) i++; 
if ( (x-1==x1) && (y+2==y1) ) i++; 
if ( (x+2==x1) && (y-1==y1) ) i++; 
if ( (x-1==x1) && (y-2==y1) ) i++; 
if ( (x-2==x1) && (y+1==y1) ) i++; 
if ( (x-4==x1) && (y-4==y1) ) i++; 

if ( i==0 ) cout<<"NO"; 
else cout<<"YES"; 

 } 
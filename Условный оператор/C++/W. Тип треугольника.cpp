// W. “ип треугольника»справ.cpp: определ€ет точку входа дл€ консольного приложени€.
//
#include <iostream>
using namespace std;

int main(){
int a,b,c,m1,m2,m3;
  cin>>a>>b>>c;
 
  m1=min(a,min(b,c));
  m3=max(a,max(b,c));
  m2=a+b+c-m1-m3;
  a=m1;
  b=m2;
  c=m3;
  if ((b+c)>a && (c+a)>b && (b+a)>c)
  {
    if (c*c == a*a + b*b)
      cout<<"right";
    else if (c*c < a*a + b*b)
      cout<<"acute";
    else
      cout<<"obtuse";
  }   
  else cout<<"impossible";
	system("pause");
}
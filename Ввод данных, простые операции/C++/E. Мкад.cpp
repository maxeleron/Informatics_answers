#include <iostream>
using namespace std;
int main()
{
int vasya,t,v,s;

cin>>v>>t;

if (v*t > 0)
   {
    vasya = (v * t) % 109;
   }
//else
//{

if (v*t<=0)
   {
    vasya = (109 + ((v * t) % 109)) % 109;
   }

//}
cout<<vasya;
system("pause");
return 0;
}
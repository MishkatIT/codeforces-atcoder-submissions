#include<iostream>
using namespace std;
int main()
{
   int k, w, needed = 0, d;
   cin >> k >> d >> w;
   for(int i=1; i<=w; i++)
   {
        needed += k*i;
   }
   if(needed>d)
   {
       cout << needed-d;
   }
   else
   {
       cout << "0";
   }
}

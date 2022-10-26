/*
    author    : MishkatIT
*/
#include<iostream>
#include<string>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
   fio;
   int t;
   cin >> t;
   while(t--)
   {
       int n, a, b, cnt = 0;
       char c = 'a';
       cin >> n >> a >> b;
       for(int i = 0; i < n; i++)
       {
           cout << c++;
           cnt++;
           if(cnt == b)
               {
                   c = 'a';
                   cnt = 0;
               }
       }
       cout << '\n';
   }
    return 0;
}





/*
    author    : MishkatIT
    created   : Saturday 2023-04-08-05.26.59
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
       int n;
       cin >> n;
       if(n <= 2)
       {
         if(n == 2)
          cout << -1 << '\n';
         else
          cout << 1 << '\n';
         continue;
       }
       int cnt = 0;
       for (int i = 1; i <= n * n; i += 2)
       {
         cout << i << ' ';
         if(++cnt % n == 0) cout << '\n';
       }
       for (int i = 2; i <= n * n; i += 2)
       {
         cout << i << ' ';
         if(++cnt % n == 0) cout << '\n';
       }
    }
    return 0;
}

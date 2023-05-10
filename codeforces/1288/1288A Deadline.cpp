/*
    author    : MishkatIT
    created   : Wednesday 2023-05-10-20.15.50
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
      long double n, d;
      cin >> n >> d;
      bool ok = false;
//      if(n == d)
//        ok = true;
      for (long double i = 0; i * i <= d; i++)
      {
        if(n - i >= ceil(d / (i + 1)))
        {
          ok = true;
          break;
        }
      }
      cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}


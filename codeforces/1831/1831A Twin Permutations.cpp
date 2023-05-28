/*
    author    : MishkatIT
    created   : Sunday 2023-05-28-20.34.02
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
const ll N = 1e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
      int n;
      cin >> n;
      for (int i = 0; i < n; i++)
      {
            int x;
            cin >> x;
            cout << n - x +  1 << ' ';
      }
      cout << '\n';
    }
    return 0;
}

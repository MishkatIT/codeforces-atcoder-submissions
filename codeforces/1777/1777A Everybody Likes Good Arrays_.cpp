/*
    author    : MishkatIT
    created   : Saturday 2023-04-08-01.16.32
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using ll = long long;
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
        vector<ll>v(n);
        for (auto &i : v)
        {
            cin >> i;
        }
        int ans = 0;
        for (int i = 0; i + 1 < n; i++)
        {
          if(v[i] % 2 == v[i + 1] % 2)
          {
            v[i + 1] = max(v[i], v[i + 1]);
            ans++;
          }
        }
        cout << ans << '\n';
    }
    return 0;
}


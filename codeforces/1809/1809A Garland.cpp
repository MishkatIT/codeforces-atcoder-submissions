/*
    author    : MishkatIT
    created   : Thursday 2023-03-23-23.00.09
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
        string str;
        cin >> str;
        map<char, int> mp;
        int mx = 0;
        for (auto &i : str)
        {
          mx = max(mx, ++mp[i]);
        }
        if(mp.size() == 1)
          cout << -1 << '\n';
        else
        {
          if(mx == 3)
          {
            cout << 6 << '\n';
          }
          else
          {
            cout << 4 << '\n';
          }
        }
    }
    return 0;
}

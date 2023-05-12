/*
    author    : MishkatIT
    created   : Friday 2023-05-12-20.28.43
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
      string str;
      cin >> str;
      bool ok = true;
      set<char> s;
      int n = str.length();
      for (int i = 0; i < n / 2; i++)
      {
        s.insert(str[i]);
      }
     if(s.size() == 1)
      ok = false;
     cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}

/*
    author    : MishkatIT
    created   : Saturday 2023-05-06-20.30.43
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
    string x = "codeforces";
    while(t--)
    {
      int ans = 0;
      string str;
      cin >> str;
      for (int i = 0; i < str.length(); i++)
      {
        if(str[i] != x[i])
          ans++;
      }
      cout << ans << '\n';

    }
    return 0;
}

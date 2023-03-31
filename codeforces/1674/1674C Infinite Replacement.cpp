/*
    author    : MishkatIT
    created   : Saturday 2023-04-01-00.50.15
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
        string s, t;
        cin >> s >> t;
        char mn = *min_element(t.begin(), t.end());
        if(mn == 'a')
        {
          if(t.length() == 1)
            cout << 1 << '\n';
          else
            cout << -1 << '\n';
        }
        else
        {
          cout << (1LL << s.length())<< '\n';
        }
    }
    return 0;
}


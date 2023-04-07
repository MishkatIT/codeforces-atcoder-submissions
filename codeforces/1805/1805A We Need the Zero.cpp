/*
    author    : MishkatIT
    created   : Friday 2023-04-07-20.24.34
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
        int temp;
        int x = 0;
        for (int i = 0; i < n; i++)
        {
          cin >> temp;
          x ^= temp;
        }
        if(!(n & 1))
        {
          if(x == 0)
            cout << 0 << '\n';
          else
            cout << -1 << '\n';
        }
        else
        {
          cout << x << '\n';
        }
    }
    return 0;
}


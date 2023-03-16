/*
    author    : MishkatIT
    created   : Thursday 2023-03-16-21.36.36
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
        vector<int>v(n);
        for (auto &i : v)
        {
            cin >> i;
        }
        sort(v.rbegin(), v.rend());
        for (auto &i : v)
        {
          cout << i << ' ';
        }
        cout << '\n';
    }
    return 0;
}


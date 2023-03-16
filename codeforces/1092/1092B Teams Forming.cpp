/*
    author    : MishkatIT
    created   : Thursday 2023-03-16-21.45.33
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    int t = 1;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>v(n);
        for (auto &i : v)
        {
            cin >> i;
        }
        sort(v.begin(), v.end());
        int ans = 0;
        for(int i = 0; i + 1 < n; i += 2)
        {
            ans += (v[i + 1] - v[i]);
        }
        cout << ans;
    }
    return 0;
}


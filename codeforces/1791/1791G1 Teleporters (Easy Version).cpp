/*
    author    : MishkatIT
    created   : Sunday 2023-02-12-21.42.09
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
        long long n, c;
        cin >> n >> c;
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            v[i] += i + 1;
        }
        sort(v.begin(), v.end());
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            c -= v[i];
            if(c >= 0)
                ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}


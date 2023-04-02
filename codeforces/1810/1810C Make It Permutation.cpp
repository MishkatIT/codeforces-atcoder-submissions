/*
    author    : MishkatIT
    created   : Monday 2023-04-03-02.26.33
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
        long long n, c, d;
        cin >> n >> c >> d;
        vector<long long> v(n);
        for (auto &i : v)
            cin >> i;
        sort(v.begin(), v.end());
        long long ans = 0;
        if(v.front() != 1)
        {
            v.insert(v.begin(), 1);
            n++;
            ans += d;
        }
        v.erase(unique(v.begin(), v.end()), v.end());
        long long must = (n - (long long)v.size()) * c;
        ans += must;
        n = v.size();
        long long x = LONG_LONG_MAX;
        for (long long i = 0; i < n; i++)
        {
            long long missing = v[i] - (i + 1LL);
            x = min(x, ((missing * d) + ((n - i - 1LL) * c)));
        }
        cout << ans + x << '\n';
    }
    return 0;
}

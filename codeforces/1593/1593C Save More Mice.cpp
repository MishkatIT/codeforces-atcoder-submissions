/*
    author    : MishkatIT
    created   : Saturday 2023-05-20-22.56.41
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int>v(k);
        for (auto& i: v)
        {
            cin >> i;
        }
        sort(v.begin(), v.end());
        int l = 0, r = k - 1;
        int ans = 0;
        while(l < v[r])
        {
            ans++;
            l += (n - v[r]);
            r--;
            if(r < 0)break;
        }
        cout << ans << '\n';
    }
    return 0;
}


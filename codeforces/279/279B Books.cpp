/*
    author    : MishkatIT
    created   : Saturday 2023-06-17-00.21.30
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
const ll N = 1e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;
int main()
{
    fio;
    int n, t;
    cin >> n >> t;
    vector<int>v(n);
    for (auto& i : v)
    {
        cin >> i;
    }
    int ans = 0;
    int l = 0;
    for (int i = 0; i < n; i++)
    {
        if(v[i] <= t)
        {
            ans = 1;
            break;
        }
        l++;
    }
    int cnt = 1;
    int r = l + 1;
    int sum = v[l];
    while(r < n)
    {

        if(sum + v[r] <= t)
        {
            sum += v[r];
            r++;
            cnt++;
            ans = max(ans, cnt);
        }
        else
        {
            sum -= v[l];
            l++;
            cnt--;
        }
//      debug(l)debug(r)
        if(l == r)
        {
            sum += v[l];
            cnt++;
            r++;
        }
    }
    cout << ans;
}

/*
    author    : MishkatIT
    created   : Saturday 2022-12-31-20.05.01
    problem   : C. Koxia and Number Theory
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
using namespace std;
void solve(void)
{
    int n;
    cin >> n;
    int arr[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    for (auto& i: mp)
    {
        if(i.second > 1)
        {
            cout << "NO" << '\n';
            return;
        }
    }
    bool ok = true;
    for (int mod = 2; mod < n; mod++)
    {
        vector<int> cnt(mod);
        for (int i = 0; i < n; i++)
            cnt[arr[i] % mod]++;
        bool isOne = false;
        for (int i = 0; i < mod; i++)
        {
            if(cnt[i] < 2)
            {
                isOne = true;
                break;
            }
        }
        if(!isOne)
        {
            ok = false;
            break;
        }
    }
    cout << (ok ? "YES" : "NO") << '\n';
    return;

}

signed main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}

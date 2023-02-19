/*
    author    : MishkatIT
    created   : Monday 2023-02-20-01.10.26
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    vector<int> v(n);
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    long long ans = 0;
    vector<int> power(31);
    for (int i = 0; i < 32; i++)
    {
        power[i] = 1 << i; // shifting left
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 32; j++)
        {
            int x = (power[j] - v[i]); // power = x + v[i]
            ans += mp[x];
            if(power[j] == v[i])
                ans--;
        }
    }
    cout << ans / 2 << '\n';
    return 0;
}

/*
    author    : MishkatIT
    created   : Wednesday 2023-05-17-00.07.39
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
    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;
    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[str[i]]++;
    }
    for (auto& i: mp)
    {
        int mn = min(k, i.second);
        i.second -= mn;
        k -= mn;
        if(k <= 0)break;
    }
    string ans = "";
    for (int i = n - 1; i >= 0; i--)
    {
        if(mp[str[i]])
        {
            ans += str[i];
            mp[str[i]]--;
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans;
    return 0;
}


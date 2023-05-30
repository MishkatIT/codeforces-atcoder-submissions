/*
    author    : MishkatIT
    created   : Tuesday 2023-05-30-22.53.03
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
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        vector<int> v;
        v.push_back(0);
        for (int i = 0; i < str.length(); i++)
        {
            if(str[i] == 'R')
                v.push_back(i + 1);
        }
        v.push_back(str.length() + 1);
        int ans = 0;
        for (int i = 0; i + 1 < v.size(); i++)
        {
            ans = max(ans, v[i + 1] - v[i]);
        }
        cout << ans << '\n';
    }
    return 0;
}



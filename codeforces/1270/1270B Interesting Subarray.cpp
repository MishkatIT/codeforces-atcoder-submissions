/*
    author    : MishkatIT
    created   : Saturday 2023-07-08-17.53.22
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
        int n;
        cin >> n;
        vector<int>v(n);
        for (auto& i : v)
        {
            cin >> i;
        }
        int l, r;
        l = r = 0;
        for (int i = 1; i < n; i++)
        {
            if(abs(v[i] - v[i - 1]) >= 2)
            {
                r = i + 1;
                l = i;
                break;
            }
        }
        if(l != r)
        {
            cout << "YES" << '\n';
            cout << l << ' ' << r << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
    return 0;
}


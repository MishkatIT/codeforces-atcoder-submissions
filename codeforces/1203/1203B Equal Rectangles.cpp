/*
    author    : MishkatIT
    created   : Thursday 2023-06-22-19.45.58
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
        n *= 4;
        vector<int>v(n);
        for (auto& i : v)
        {
            cin >> i;
        }
        sort(v.begin(), v.end());
        set<int> s;
        int l = 0, r = n - 1;
        bool ok = true;
        while(l < r)
        {
            if(v[l] != v[l + 1] || v[r] != v[r - 1])
            {
                ok = false;
                break;
            }
            s.insert(v[l] * v[r]);
            l += 2, r -= 2;
        }
        if((int)s.size() != 1) ok = false;
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}


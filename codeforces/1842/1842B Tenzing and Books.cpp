/*
    author    : MishkatIT
    created   : Saturday 2023-06-24-21.28.18
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

int target, n, x;

void check(vector<int>& v)
{
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < 31; j++)
        {
            int zz = 1 << j;
            if(!(x & zz) && (v[i] & zz)) return;
        }
        target |= v[i];
    }
}

int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        target = 0;
        cin >> n >> x;

        vector<int> a(n);
        for (auto& x: a)
        {
            cin >> x;
        }
        vector<int> b(n);
        for (auto& x: b)
        {
            cin >> x;
        }
        vector<int> c(n);
        for (auto& x: c)
        {
            cin >> x;
        }
        check(a);
        if(target != x) check(b);
        if(target != x) check(c);
        if(target == x)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}

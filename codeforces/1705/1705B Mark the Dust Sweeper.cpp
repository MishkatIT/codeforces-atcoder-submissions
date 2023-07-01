/*
    author    : MishkatIT
    created   : Saturday 2023-07-01-20.50.22
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
        bool ok = false;
        ll sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if(v[i]) ok = true;
            if(ok && v[i] == 0)
                sum++;
            else
                sum += v[i];
        }
        cout << sum << '\n';
    }
    return 0;
}


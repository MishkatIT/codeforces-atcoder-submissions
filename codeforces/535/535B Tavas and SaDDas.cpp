/*
    author    : MishkatIT
    created   : Wednesday 2023-05-17-22.24.50
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
vector<ll> v;

void calc(ll n)
{
    if(n > (ll)1e9) return;
    v.push_back(n);
    calc(n * 10 + 4);
    calc(n * 10 + 7);
}

int main()
{
    fio;
    ll n;
    cin >> n;
    calc(0);
    sort(v.begin(), v.end());
    for (int i = 1; i < n; i++)
    {
        if(v[i] == n)
        {
            cout << i;
            return 0;
        }
    }
}

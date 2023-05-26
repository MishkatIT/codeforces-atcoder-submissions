/*
    author    : MishkatIT
    created   : Saturday 2023-05-27-00.31.49
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
        int oddmax = -1, evenmax = -1;
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            if(v[i] & 1)
            {
                if(v[i] < oddmax)
                {
                    ok = false;
                    break;
                }
                else
                    oddmax = max(oddmax, v[i]);
            }
            else
            {
                if(v[i] < evenmax)
                {
                    ok = false;
                    break;
                }
                else
                    evenmax = max(evenmax, v[i]);
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}


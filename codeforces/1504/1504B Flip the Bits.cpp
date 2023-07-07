/*
    author    : MishkatIT
    created   : Friday 2023-07-07-15.45.34
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
        string a, b;
        cin >> a >> b;
        vector<int> possible(n);
        int one = 0, zero = 0;
        for (int i = 0; i < n; i++)
        {
            if(a[i] == '1') one++;
            else zero++;
            if(one == zero) possible[i] = 1;
        }
        bool ok = true;
        int x = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if(a[i] != b[i])
            {
                if(possible[i]) x = 1;
                else if(x & 1) continue;
                else
                {
                    ok = false;
                    break;
                }
            }
            else
            {
                if(possible[i]) x = 0;
                if(x & 1)
                {
                    ok = false;
                    break;
                }
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}


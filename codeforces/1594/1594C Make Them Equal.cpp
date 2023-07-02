/*
    author    : MishkatIT
    created   : Sunday 2023-07-02-21.02.43
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
        char c;
        cin >> c;
        string str;
        cin >> str;
        set<char> s;
        for (auto& i: str)
        {
            s.insert(i);
        }
        if(s.size() == 1 && *s.begin() == c)
        {
            cout << 0 << '\n';
        }
        else if(str[n - 1] == c)
        {
            cout << 1 << '\n';
            cout << n << '\n';
        }
        else if(str[n - 2] == c)
        {
            cout << 1 << '\n';
            cout << n - 1 << '\n';
        }
        else
        {
            bool ok;
            for (int i = 1; i <= n; i++)
            {
                ok = true;
                for (int j = i - 1; j < n; j += i)
                    ok &= (str[j] == c);
                if(ok)
                {
                    cout << 1 << '\n';
                    cout << i << '\n';
                    break;
                }
            }
            if(!ok)
            {
                cout << 2 << '\n';
                cout << n - 1 << ' ' << n << '\n';
            }
        }

    }
    return 0;
}


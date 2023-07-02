/*
    author    : MishkatIT
    created   : Monday 2023-07-03-01.57.20
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
        int n, a, b;
        cin >> n >> a >> b;
        if(a + b == 0)
        {
            for (int i = 1; i <= n; i++)
                cout << i << " \n"[i == n];
            continue;
        }
        int temp = 0;
        if(n == 2) temp = -1;
        else if(abs(a - b) > 1) temp = -1;
        else if((!(n & 1)) && (max(a, b) > (n / 2) - 1)) temp = -1;
        else if((n & 1) && ((max(a, b) > n / 2) || (max(a, b) == n / 2 && a == b))) temp = -1;

        if(temp == -1)
        {
            cout << temp << '\n';
            continue;
        }
        int mn = 1, mx = n;
        int cnt = 0;
        if(a > b)
        {
            for (int i = 1; i <= n; i++)
            {
                if(i & 1) cout << mn++ << ' ';
                else cout << mx-- << ' ', cnt++;
                if(cnt == a)
                {
                    while(mx > mn)
                    {
                        cout << mx-- << ' ';
                        i++;
                    }
                }
            }
        }
        else if (a < b)
        {
            for (int i = 1; i <= n; i++)
            {
                if(i & 1) cout << mx-- << ' ';
                else cout << mn++ << ' ', cnt++;
                if(cnt == b)
                {
                    while(mn < mx)
                    {
                        cout << mn++ << ' ';
                        i++;
                    }
                }
            }
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                if(i & 1) cout << mn++ << ' ';
                else cout << mx-- << ' ';
                if(mn - 2 == a)
                {
                    while(mn < mx)
                    {
                        cout << mn++ << ' ';
                        i++;
                    }
                }
            }
        }
        cout << '\n';
    }
    return 0;
}


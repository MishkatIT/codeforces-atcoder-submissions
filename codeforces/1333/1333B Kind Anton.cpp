/*
    author    : MishkatIT
    created   : Friday 2023-05-19-18.19.05
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>a(n);
        for (auto& i: a)
        {
            cin >> i;
        }

        vector<int>b(n);
        for (auto& i: b)
        {
            cin >> i;
        }
        bool neg = false, pos = false, ok = true;
        for (int i = 0; i < n; i++)
        {
            if(a[i] < b[i])
            {
                if(!pos)
                {
                    ok = false;
                    break;
                }
            }
            else if(a[i] > b[i])
            {
                if(!neg)
                {
                    ok = false;
                    break;
                }
            }
            neg |= a[i] < 0;
            pos |= a[i] > 0;
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}

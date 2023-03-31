/*
    author    : MishkatIT
    created   : Friday 2023-03-31-20.33.27
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
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
        for (auto &i : v)
        {
            cin >> i;
        }
        bool ok = false;
        if(*min_element(v.begin(), v.end()) == 1)
            ok = true;
        for (int i = 1; i <= n; i++)
        {
            if(i >= v[i - 1])
            {
                ok = true;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}

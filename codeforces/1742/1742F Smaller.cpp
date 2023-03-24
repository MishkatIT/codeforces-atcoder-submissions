/*
    author    : MishkatIT
    created   : Friday 2023-03-24-22.07.00
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
#define int long long
signed main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        char maxS = 'a', maxT = 'a';
        int lenS = 1, lenT = 1;
        int q;
        cin >> q;
        while(q--)
        {
            int d, k;
            cin >> d >> k;
            string str;
            cin >> str;
            int len = str.length();
            char mx = *max_element(str.begin(), str.end());
            if(d == 1)
            {
                maxS = max(maxS, mx);
                lenS += (len * k);
            }
            else
            {
                maxT = max(maxT, mx);
                lenT += (len * k);
            }
            bool ok = false;
            if(maxT > 'a')
                ok = true;
            else if(maxS > 'a')
                ok = false;
            else if(lenS < lenT)
                ok = true;
            cout << (ok ? "YES" : "NO") << '\n';
        }

    }
    return 0;
}

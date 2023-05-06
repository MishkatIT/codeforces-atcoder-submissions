/*
    author    : MishkatIT
    created   : Saturday 2023-05-06-20.42.21
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
        int a = 1e7, b = 1e7, c = 1e7;
        string f = "11", g = "10", h = "01";
        while(n--)
        {
            int x;
            cin >> x;
//        debug(x);
            string str;
            cin >> str;
            if(str == f)
                a = min(a, x);
            else if(str == g)
                b = min(b, x);
            else if(str == h)
                c = min(c, x);
        }
//      cout << a << '\n';
        int ans = -1;
        int zz = min({a, (b + c)});
        if(zz != 1e7)
            ans = zz;
        cout << ans << '\n';
    }
    return 0;
}


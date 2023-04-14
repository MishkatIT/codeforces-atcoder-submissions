/*
    author    : MishkatIT
    created   : Friday 2023-04-14-14.49.55
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;

int check(int a, int b, int c, int d, int p, int q)
{
    int ans = 0;
    if(b < d)
        swap(b, d);
    if(a == c && c == p)
    {
        ans = b - d;
        if(b > q && q > d)
            ans += 2;
    }
    else
        ans = abs(a - c) + abs(b - d);
    return ans;
}

int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int x1, y1, x2, y2, f1, f2;
        cin >> x1 >> y1 >> x2 >> y2 >> f1 >> f2;
        cout << max(check(x1, y1, x2, y2, f1, f2), check(y1, x1, y2, x2, f2, f1)) << '\n';
    }
    return 0;
}


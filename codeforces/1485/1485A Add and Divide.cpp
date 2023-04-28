/*
    author    : MishkatIT
    created   : Friday 2023-04-28-23.33.42
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;

int check(int a, int b)
{
    int x = 0;
    while(a)
    {
        a /= b;
        x++;
    }
    return x;
}

int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        bool one = false;
        int ans = 0;
        if(b == 1)
            b++, one = true;
        ans = check(a, b);
        for (int i = 1; i < ans; i++)
        {
            ans = min(ans, check(a, b + i) + i);
        }
        if(one)ans++;
        cout << ans << '\n';
    }
    return 0;
}

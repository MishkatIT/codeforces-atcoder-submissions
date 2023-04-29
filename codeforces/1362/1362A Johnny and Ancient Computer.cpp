/*
    author    : MishkatIT
    created   : Sunday 2023-04-30-02.16.02
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
        long long a, b;
        cin >> a >> b;
        if(a > b)
            swap(a, b);
        int cnt = 0;
        while(a < b)
        {
            a *= 2;
            cnt++;
        }
        int ans = 0;
        if(a == b)
        {
            ans = cnt / 3;
            cnt %= 3;
            ans += cnt / 2;
            cnt %= 2;
            ans += cnt;
        }
        else ans = -1;
        cout << ans << '\n';

    }
    return 0;
}


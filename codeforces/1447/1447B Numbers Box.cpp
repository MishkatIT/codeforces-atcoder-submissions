/*
    author    : MishkatIT
    created   : Monday 2023-03-06-02.08.33
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
        int n, m;
        cin >> n >> m;
        bool zero = false;
        int neg = 0;
        int ans = 0;
        int mn = 200;
        int temp;
        for (int i = 0; i < n * m; i++)
        {
            cin >> temp;
            ans += abs(temp);
            if(temp == 0) zero = true;
            else if(temp < 0) neg++;
            mn = min(mn, abs(temp));
        }
        if(neg % 2 == 0 || zero)
            cout << ans << '\n';
        else
            cout << ans - (mn * 2) << '\n';
    }
    return 0;
}


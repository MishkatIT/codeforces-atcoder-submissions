/*
    author    : MishkatIT
    created   : Thursday 2023-03-09-01.31.53
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    long long ans = 1;
    int temp, last = 123, zero = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if(temp == 1)
        {
            if(last != 123)
                ans *= 1ll * (i - last);
            last = i;
        }
        else zero++;
    }
    if(zero == n)
        ans = 0;
    cout << ans;
    return 0;
}


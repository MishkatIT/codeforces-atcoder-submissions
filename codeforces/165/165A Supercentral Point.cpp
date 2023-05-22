/*
    author    : MishkatIT
    created   : Tuesday 2023-05-23-03.26.57
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
    int n;
    cin >> n;
    int x[n], y[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b, c, d;
        a = b = c = d = 0;
        for (int j = 0; j < n; j++)
        {
            a |= (x[j] > x[i] && y[j] == y[i]);
            b |= (x[j] < x[i] && y[j] == y[i]);
            c |= (x[j] == x[i] && y[j] > y[i]);
            d |= (x[j] == x[i] && y[j] < y[i]);
            if(a + b + c + d == 4)
            {
                ans++;
                break;
            }
        }
    }
    cout << ans;
    return 0;
}

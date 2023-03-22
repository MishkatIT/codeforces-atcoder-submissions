/*
    author    : MishkatIT
    created   : Wednesday 2023-03-22-22.58.32
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    long long t, n, i, k,s;
    cin >> t;
    while(t--)
    {

        cin >> n;
        s = 0;
        while (n > 0)
        {
            k = (n * 2) + (n - 2) * 2;
            k = k * (n / 2);
            n = n - 2;
            s = s + k;
        }
        cout << s << '\n';
    }
    return 0;
}

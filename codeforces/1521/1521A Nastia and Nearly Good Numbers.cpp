/*
    author    : MishkatIT
    created   : Sunday 2023-04-23-14.13.48
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
        if(b == 1)
        {
            cout << "NO" << '\n';
            continue;
        }
        cout << "YES" << '\n';
        cout << a << ' ' << a * b << ' ' << a + a * b << '\n';
    }
    return 0;
}


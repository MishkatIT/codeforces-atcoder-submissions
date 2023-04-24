/*
    author    : MishkatIT
    created   : Monday 2023-04-24-16.34.56
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
        n--;
        int x = log2(n);
        x = powl(2, x);
        while(n >= x)
            cout << n-- << ' ';
        cout << 0;
        while(n)
            cout << ' ' << n--;
        cout << '\n';
    }
    return 0;
}


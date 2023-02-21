/*
    author    : MishkatIT
    created   : Wednesday 2023-02-22-01.53.03
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    int n, a, b;
    cin >> n >> a >> b;
    b %= n;
    if(b == 0)
    {
        cout << a;
        return 0;
    }
    if(b < 0)
    {
        b += a;
        if(b < 1)
            b += n;
        cout << b;
        return 0;
    }
    a = (a + b) % n;
    if(a == 0)
        a = n;
    cout << a;
    return 0;
}


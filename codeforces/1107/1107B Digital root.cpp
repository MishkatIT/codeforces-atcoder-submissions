/*
    author    : MishkatIT
    created   : Wednesday 2022-12-21-04.16.34
    problem   : B. Digital root
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        long long k, x;
        cin >> k >> x;
        cout << 9 * (k - 1) + x << '\n';
    }
    return 0;
}


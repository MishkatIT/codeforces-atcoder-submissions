/*
    author    : MishkatIT
    created   : Sunday 2023-07-30-21.04.56
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
        long long n;
        cin >> n;
        long long cnt = 1;
        while(n % cnt == 0) cnt++;
        cout << --cnt << '\n';
    }

    return 0;
}


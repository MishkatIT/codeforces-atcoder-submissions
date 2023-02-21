/*
    author    : MishkatIT
    created   : Tuesday 2023-02-21-22.54.14
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
        int h, m;
        cin >> h >> m;
        if(h == 0 && m == 0)
            cout << 0 << '\n';
        else
            cout << (23 - h) * 60 + (60 - m) << '\n';
    }
    return 0;
}


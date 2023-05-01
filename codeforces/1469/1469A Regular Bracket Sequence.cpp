/*
    author    : MishkatIT
    created   : Tuesday 2023-05-02-02.10.22
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
        string str;
        cin >> str;
        int n = str.length();
        bool ok = true;
        ok &= !(n & 1);
        ok &= str.front() != ')';
        ok &= str.back() != '(';
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}


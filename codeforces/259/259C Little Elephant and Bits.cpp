/*
    author    : MishkatIT
    created   : Tuesday 2023-05-02-21.20.43
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    string str;
    cin >> str;
    int i, n = str.length();
    for(i = 0; i < n && str[i] != '0'; i++);
    cout << str.substr(0, min(n - 1, i)) << str.substr(min(i + 1, n));
    return 0;
}


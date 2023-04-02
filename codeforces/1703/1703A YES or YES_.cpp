/*
    author    : MishkatIT
    created   : Sunday 2023-04-02-23.12.10
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
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        cout << (str == "yes" ? "YES" : "NO") << '\n';
    }
    return 0;
}


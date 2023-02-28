/*
    author    : MishkatIT
    created   : Tuesday 2023-02-28-20.47.01
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    string s;
    for (int i = 1; i <= 60; i++)
    {
        if(i % 3 == 0)
            s.push_back('F');
        if(i % 5 == 0)
            s.push_back('B');
    }
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        bool ok = false;
        if(s.find(str) != string::npos)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';

    }
    return 0;
}

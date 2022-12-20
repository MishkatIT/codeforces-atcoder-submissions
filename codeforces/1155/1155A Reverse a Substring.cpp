/*
    author    : MishkatIT
    created   : Tuesday 2022-12-20-23.17.26
    problem   : A. Reverse a Substring
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    string str;
    cin >> str;
    for(int i = 1; i < n; i++)
    {
        if(str[i] < str[i - 1])
        {
            cout << "YES" << '\n';
            cout << i << ' ' << i + 1;
            return 0;
        }
    }
    cout << "NO" << '\n';
    return 0;
}


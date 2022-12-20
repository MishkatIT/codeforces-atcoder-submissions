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
    char mx = str[0];
    int pos = 0;
    for(int i = 1; i < n; i++)
    {

        if(str[i] < mx)
        {
            cout << "YES" << '\n';
            cout << pos + 1 << ' ' << i + 1;
            return 0;
        }
        else
        {
            mx = str[i];
            pos = i;
        }
    }
    cout << "NO" << '\n';
    return 0;
}


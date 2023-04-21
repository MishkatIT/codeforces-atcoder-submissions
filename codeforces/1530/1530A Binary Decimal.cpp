/*
    author    : MishkatIT
    created   : Saturday 2023-04-22-00.17.46
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
        string str;
        cin >> str;
        cout << *max_element(str.begin(), str.end()) << '\n';
    }

    return 0;
}


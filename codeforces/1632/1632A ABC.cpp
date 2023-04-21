/*
    author    : MishkatIT
    created   : Saturday 2023-04-22-00.58.55
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
        int n;
        cin >> n;
        string str;
        cin >> str;
        if(n > 2 || str == "11" || str == "00")
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }

    return 0;
}



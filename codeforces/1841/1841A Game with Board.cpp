/*
    author    : MishkatIT
    created   : Tuesday 2023-06-13-01.16.49
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
        if(n < 5) cout << "Bob" << '\n';
        else cout << "Alice" << '\n';
    }
    return 0;
}


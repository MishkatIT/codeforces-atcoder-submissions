/*
    author    : MishkatIT
    created   : Friday 2023-11-17-20.34.04
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
        if ((n + 1) % 3 == 0 || (n - 1) % 3 == 0) {
            cout << "First" << '\n';
        } else {
            cout << "Second" << '\n';
        }
    }

    return 0;
}

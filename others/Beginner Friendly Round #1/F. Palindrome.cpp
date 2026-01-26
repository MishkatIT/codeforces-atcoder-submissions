/*
    author    : MishkatIT
    created   : Wednesday 2024-03-06-17.53.31
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        char c = 'a';
        while(n > 0) {
            int x = 1;
            while (x * (x + 1) / 2 <= n) x++;
            x--;
            cout << string(x, c);
            n -= x * (x + 1) / 2;
            c++;
        }
        cout << '\n';
    }

    return 0;
}


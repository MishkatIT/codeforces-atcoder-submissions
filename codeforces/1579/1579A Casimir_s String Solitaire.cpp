/*
    author    : MishkatIT
    created   : Wednesday 2023-07-05-10.56.13
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
        int a, b, c;
        a = b = c = 0;
        for (auto& i: str)
        {
            if(i == 'A')a++;
            else if(i == 'B')b++;
            else c++;
        }
        int mn = min(a, b);
        a -= mn;
        b -= mn;
        mn = min(b, c);
        b -= mn;
        c -= mn;
        bool ok = false;
        if(a == 0 && b == 0 && c == 0) ok = true;
        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}


/*
    author    : MishkatIT
    created   : Monday 2023-04-17-21.59.45
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
        int o = 0, e = 0;
        for(int i = 0; i < n * 2; i++)
        {
            int x;
            cin >> x;
            o += x & 1;
            e += !(x & 1);
        }
        cout << (o == e? "YES" : "NO") << '\n';
    }

    return 0;
}


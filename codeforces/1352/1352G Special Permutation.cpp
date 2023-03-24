/*
    author    : MishkatIT
    created   : Saturday 2023-03-25-00.30.20
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
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
        if(n < 4)
            cout << -1 << '\n';
        else
        {
            for (int i = (n - (!(n & 1))); i > 0; i -= 2)
                cout << i << ' ';
            cout << "4 2 ";
            for (int i = 6; i <= n; i += 2)
                cout << i << ' ';
            cout << '\n';
        }
    }
    return 0;
}


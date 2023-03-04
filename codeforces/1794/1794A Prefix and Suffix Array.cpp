/*
    author    : MishkatIT
    created   : Saturday 2023-03-04-23.33.34
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
        string str;
        string a, b;
        for (int i = 0; i < 2 * n - 2; i++)
        {
            cin >> str;
            if(str.size() == n - 1)
            {
                if(a.size())
                    b = str;
                else
                    a = str;
            }
        }
        bool ok = true;
        reverse(b.begin(), b.end());
        if(a != b)
            ok = false;
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}


/*
    author    : MishkatIT
    created   : Friday 2023-05-19-17.16.12
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            x = abs(x);
            if(i & 1)
                x *= -1;
            cout << x << ' ';
        }
        cout << '\n';
    }
    return 0;
}


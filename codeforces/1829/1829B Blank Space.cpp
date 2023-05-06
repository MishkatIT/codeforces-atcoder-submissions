/*
    author    : MishkatIT
    created   : Saturday 2023-05-06-20.38.11
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
        int mx = 0;
        int tmp = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if(x == 0)
            {
                tmp++;
                mx = max(mx, tmp);
            }
            else tmp = 0;
        }
        cout << mx << '\n';
    }
    return 0;
}


/*
    author    : MishkatIT
    created   : Thursday 2023-03-09-21.24.32
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
        vector<int> v(n);
        int neg = 0, pos = 0;
        for (auto &i: v)
        {
            cin >> i;
            if(i < 0) neg++;
            else if(i > 0) pos++;
        }
        sort(v.rbegin(), v.rend());
        int temp = 0;
        for(int i = 0; i < n; i++)
        {
            if(i < pos)
                cout << ++temp << ' ';
            else
                cout << max(0, --temp) << ' ';
        }
        cout << '\n';
        temp = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            cout << ++temp << ' ';
            if(neg && i > 0)
                cout << --temp << ' ', i--, neg--;
        }
        cout << '\n';
    }
    return 0;
}


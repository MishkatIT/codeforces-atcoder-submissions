/*
    author    : MishkatIT
    created   : Monday 2023-04-24-20.35.07
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
        int n, x;
        cin >> n >> x;
        vector<int>a(n);
        for (auto &i : a)
        {
            cin >> i;
        }
        vector<int>b(n);
        for (auto &i : b)
        {
            cin >> i;
        }
        int ans = -1;
        int temp = -1;
        for (int i = 0; i < n; i++)
        {
            if(a[i] <= x)
            {
                if(b[i] > temp)
                {
                    ans = i + 1;
                    temp = b[i];
                }
            }
            x--;
        }
        cout << ans << '\n';
    }
    return 0;
}

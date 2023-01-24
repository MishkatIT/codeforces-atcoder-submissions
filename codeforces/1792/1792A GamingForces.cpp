/*
    author    : MishkatIT
    created   : Tuesday 2023-01-24-20.34.52
    problem   : A
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
        int temp;
        int one = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if(temp == 1)
                one++;
            else
                ans++;
        }
        ans += (one / 2) + (one % 2);
        cout << ans << '\n';
    }
    return 0;
}

/*
    author    : MishkatIT
    created   : Tuesday 2023-06-06-20.19.48
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
        string str;
        cin >> str;
        string ans = "";
        for (int i = 0; i < n; i++)
        {
            ans += str[i++];
            while(str[i] != ans.back() && i < n)
                i++;
        }
        cout << ans << '\n';
    }
    return 0;
}

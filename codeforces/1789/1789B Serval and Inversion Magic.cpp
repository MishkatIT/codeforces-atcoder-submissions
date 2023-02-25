/*
    author    : MishkatIT
    created   : Sunday 2023-02-26-02.39.45
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
        cin >> str;
        int cnt = 0, temp = 1;
        for (int i = 0; i < n / 2; i++)
        {
            int j = n - i - 1;
            if(str[i] == str[j])
                temp = 1;
            else
            {
                cnt += temp;
                temp = 0;
            }
        }
        cout << (cnt <= 1 ? "YES" : "NO") << '\n';
    }
    return 0;
}

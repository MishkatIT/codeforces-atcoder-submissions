/*
    author    : MishkatIT
    created   : Wednesday 2023-06-28-00.15.48
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
        string a, s;
        cin >> a >> s;
        string b;
        int i = a.length() - 1;
        int j = s.length() - 1;
        while(i >= 0 && j >= 0)
        {
            if(s[j] >= a[i])
            {
                b += (s[j] - a[i]) + '0';
                i--, j--;
            }
            else if(j - 1 >= 0 && s[j - 1] == '1')
            {
                b += ((10 + (s[j] - '0')) - (a[i] - '0')) + '0';
                i--, j -= 2;
            }
            else break;
        }
        if(i >= 0)
        {
            cout << -1 << '\n';
            continue;
        }
        while(j >= 0) b += s[j--];
        reverse(b.begin(), b.end());
        int x;
        for (x = 0; x < b.length() && b[x] == '0'; x++);
        cout << b.substr(x) << '\n';
    }
    return 0;
}


/*
    author    : MishkatIT
    created   : Friday 2023-04-14-01.36.28
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
void LesGo (void)
{
    string str;
    cin >> str;
    int i;
    int n = str.length();
    for (i = 0; i < n && str[i] != 'a'; i++);
    if(i == n)
    {
        cout << "NO" << '\n';
        return;
    }
    int l = i, r = i;
    char c = 'b';
    int k = n - 1;
    while(k--)
    {
        if(l - 1 >= 0 && str[l - 1] == c)
            l--;
        else if(r + 1 < n && str[r + 1] == c)
            r++;
        else
        {
            cout << "NO" << '\n';
            return;
        }
        c++;
    }
    cout << "YES" << '\n';
    return;
}
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
        LesGo();
    return 0;
}

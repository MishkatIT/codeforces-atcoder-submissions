/*
    author    : MishkatIT
    created   : Wednesday 2023-03-08-22.07.11
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
void LesGo (void)
{
    int a, b;
    cin >> a >> b;
    string str;
    cin >> str;
    int one = b, zero = a;
    for(auto &i: str)
    {
        if(i == '1')
            one--;
        else if(i == '0')
            zero--;
    }
    int n = a + b;
    char temp;
    for(int i = 0; i < n / 2; i++)
    {
        if(str[i] == str[n - i - 1]) continue;
        else if(str[i] == '?')
        {
            str[i] = str[n - i - 1];
            one -= str[i] == '1';
            zero -= str[i] == '0';
        }
        else if(str[n - i - 1] == '?' )
        {
            str[n - i - 1] = str[i];
            one -= str[i] == '1';
            zero -= str[i] == '0';
        }
        else
        {
            cout << -1 << '\n';
            return;
        }
    }
    if(n & 1)
    {
        int mid = n / 2;
        if(str[mid] == '?')
        {
            if(one & 1) str[mid] = '1', one--;
            else str[mid] = '0', zero--;
        }
    }

    for (int i = 0; i < n / 2; i++)
    {
        if(str[i] == str[n - i - 1])
        {
            if(str[i] == '?')
            {
                if(one > 0) temp = '1';
                else temp = '0';
                str[i] = str[n - i - 1] = temp;
                one -= (str[i] == '1') * 2;
                zero -= (str[i] == '0') * 2;
            }
        }
    }
    if(one != 0 || zero != 0)
    {
        cout << -1 << '\n';
        return;
    }
    cout << str << '\n';
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

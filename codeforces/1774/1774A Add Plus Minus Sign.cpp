/*
    author    : MishkatIT
    created   : Saturday 2022-12-17-20.37.32
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
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if(str[i] == '0')
            {
                if(i != 0)
                    cout << '+';
            }
            else if(cnt)
            {
                cout << '-';
                cnt--;
            }
            else
            {
                if(i != 0)
                    cout << '+';
                cnt++;
            }
        }
        cout << '\n';
    }
    return 0;
}


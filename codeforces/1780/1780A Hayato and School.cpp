/*
    author    : MishkatIT
    created   : Wednesday 2023-01-25-20.32.33
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
        int arr[n];
        int odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] & 1)
                odd++;
            else
                even++;
        }
        if((odd == 2 && even == 1) || odd == 0)
        {
            cout << "NO" << '\n';
            continue;
        }
        else
        {
            if(odd >= 3)
            {
                cout << "YES" << '\n';
                int cnt = 3;
                for (int i = 0; cnt > 0; i++)
                {
                    if(arr[i] & 1)
                    {
                        cout << i + 1 << ' ';
                        cnt--;
                    }
                }
                cout << '\n';
            }
            else if(odd > 0 & (even > 1))
            {
                cout << "YES" << '\n';
                for (int i = 0; i < n; i++)
                {
                    if(arr[i] & 1)
                    {
                        cout << i + 1 << ' ';
                        break;
                    }
                }
                int cnt = 2;
                for (int i = 0; cnt > 0; i++)
                {
                    if(!(arr[i] & 1))
                    {
                        cout << i + 1 << ' ';
                        cnt--;
                    }
                }
                cout << '\n';
            }
            else
                cout << "NO" << '\n';
        }
    }
}

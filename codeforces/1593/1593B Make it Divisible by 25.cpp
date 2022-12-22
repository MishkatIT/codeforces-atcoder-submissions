/*
    author    : MishkatIT
    created   : Thursday 2022-12-22-10.03.59
    problem   : B. Make it Divisible by 25
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
        string str;
        cin >> str;
        int n = str.length();
        int ans = n;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int temp = (str[i] - '0') * 10 + str[j] - '0';
                if(temp % 25 == 0)
                {
                    ans = min(ans, (j - i - 1) + (n - j - 1));
                }
            }
        }
        cout << ans << '\n';

    }
    return 0;
}


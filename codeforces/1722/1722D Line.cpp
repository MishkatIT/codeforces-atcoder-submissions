/*
    author    : MishkatIT
    created   : Thursday 2023-05-25-01.04.51
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
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
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            if (str[i] == 'L')
                sum += i;
            else
                sum += (n - i - 1);
        }

        vector<ll> ans(n);
        ll l = 0, r = n - 1;
        int optimal = 1;
        for (int i = 0; i < n; i++)
        {
            while(l <= r)
            {
                if (optimal)
                {
                    if(str[l] == 'L')
                    {
                        sum -= l;
                        sum += (n - l - 1);
                        l++;
                        optimal ^= 1;
                        break;
                    }
                    optimal ^= 1;
                    l++;
                }
                else
                {
                    if(str[r] == 'R')
                    {
                        sum -= (n - r - 1);
                        sum += r;
                        r--;
                        optimal ^= 1;
                        break;
                    }
                    optimal ^= 1;
                    r--;
                }
            }
            ans[i] = sum;
        }

        for (int i = 0; i < n; i++)
            cout << ans[i] << " \n"[i == n - 1];
    }
    return 0;
}


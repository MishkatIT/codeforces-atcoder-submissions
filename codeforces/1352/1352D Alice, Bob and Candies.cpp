/*
    author    : MishkatIT
    created   : Thursday 2023-03-16-18.01.58
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
        vector<int>v(n);
        for (auto &i : v)
        {
            cin >> i;
        }
        vector<int> pre(n + 10), post(n + 10);
        pre[0] = v[0];
        for(int i = 1; i < n; i++)
        {
            pre[i] = pre[i - 1] + v[i];
        }
        post[n - 1] = v[n - 1];
        for(int i = n - 2 ; i >= 0; i--)
        {
            post[i] = post[i + 1] + v[i];
        }
        int i, j, tempi, tempj;
        i = 1, tempi = 0;
        j = n - 1, tempj = n;
        int toogle = 1, x = n - 1;
        int alice = pre[0], bob = 0;
        int last = pre[0], temp = 0;
        while(x > 0)
        {
            if(toogle % 2 == 0)
            {
                toogle++;
                for(; i < tempj; i++)
                {
                    x--;
                    temp = pre[i] - pre[tempi];
                    if(temp > last)
                    {
                        last = temp;
                        alice += pre[i] - pre[i - 1];
                        tempi = i;
                        i++;
                        break;
                    }
                    alice += pre[i] - pre[i - 1];
                }
            }
            else
            {
                toogle++;
                for(; j > tempi; j--)
                {
                    x--;
                    temp = post[j] - post[tempj];
                    if(temp > last)
                    {
                        last = temp;
                        bob += post[j] - post[j + 1];
                        tempj = j;
                        j--;
                        break;
                    }
                    bob += post[j] - post[j + 1];
                }
            }
        }
        cout << toogle << ' ' << alice << ' ' << bob << '\n';
    }
    return 0;
}


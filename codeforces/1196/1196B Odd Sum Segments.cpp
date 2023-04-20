/*
    author    : MishkatIT
    created   : Thursday 2023-04-20-22.43.40
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
        long long n, k;
        cin >> n >> k;
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> ans;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            if(ans.size() == k - 1)
            {
                sum = 0;
                for (; i < n; i++)
                    sum += v[i];
                if(sum & 1LL)
                    ans.push_back(n);
            }
            else
            {
                sum += v[i];
                if(sum & 1LL)
                    ans.push_back(i + 1), sum = 0;
            }

        }
        if(ans.size() == k)
        {
            cout << "YES" << '\n';
            for(auto &i : ans)
                cout << i << ' ';
            cout << '\n';
        }
        else
            cout << "NO" << '\n';
    }
    return 0;
}


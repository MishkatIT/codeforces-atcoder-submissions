/*
    author    : MishkatIT
    created   : Wednesday 2023-04-26-13.33.45
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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        if(v[0] != n && v[n - 1] != n)
        {
            cout << -1 << '\n';
            continue;
        }
        int l = 0, r = n - 1;
        deque<int> dq;
        while(l <= r)
        {
            if(v[l] >= v[r])
            {
                dq.push_front(v[l]);
                l++;
            }
            else
            {
                dq.push_back(v[r]);
                r--;
            }
        }
        for (int i = 0; i < n; i++)
            cout << dq[i] << " \n"[i == n - 1];
    }
    return 0;
}


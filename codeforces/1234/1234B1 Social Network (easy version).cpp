/*
    author    : MishkatIT
    created   : Tuesday 2023-04-25-13.31.41
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    int n, k;
    cin >> n >> k;
    map<int, bool> mp;
    deque<int> dq;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if(!mp[x])
        {
            mp[x] = true;
            dq.push_front(x);
            if(dq.size() > k)
            {
                mp[dq.back()] = false;
                dq.pop_back();
            }
        }
    }
    cout << dq.size() << '\n';
    for(auto &i : dq)
        cout << i << ' ';
    return 0;
}


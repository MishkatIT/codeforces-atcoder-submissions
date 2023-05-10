/*
    author    : MishkatIT
    created   : Wednesday 2023-05-10-19.35.57
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
        vector<int> v;
        int minPos = 1e9 + 5;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if(x <= 0)
                v.push_back(x);
            else
                minPos = min(minPos, x);
        }
        sort(v.begin(), v.end());
        int ans = v.size();
        int mn = 1e9 + 4;
        for (int i = 1; i < v.size(); i++)
        {
            mn = min(mn, abs(v[i] - v[i - 1]));
        }
        if(v.size() == 1 && minPos != 1e9 + 5)
          ans++;
        else if(mn >= minPos)
            ans++;
        cout << ans << '\n';
    }
    return 0;
}

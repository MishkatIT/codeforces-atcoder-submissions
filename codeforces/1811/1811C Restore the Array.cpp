/*
    author    : MishkatIT
    created   : Tuesday 2023-04-04-20.52.07
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
        vector<int>v(n - 1);
        for(auto &i : v)
            cin >> i;
        vector<int> ans;
        ans.push_back(v.front());
        for (int i = 1; i < n - 1; i++)
        {
            ans.push_back(min(v[i], v[i - 1]));
        }
        ans.push_back(v.back());
        for (auto &i : ans)
            cout << i << ' ';
        cout << '\n';
    }
    return 0;
}

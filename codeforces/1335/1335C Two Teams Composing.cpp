/*
    author    : MishkatIT
    created   : Friday 2023-05-26-19.55.49
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
const ll N = 1e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        vector<int> v;
        for(auto& i: mp)
            v.push_back(i.second);
        sort(v.rbegin(), v.rend());
        int a = v[0];
        int b = v.size();
        if(v[0] == b)a--;
        cout << min (a, b) << '\n';
    }
    return 0;
}


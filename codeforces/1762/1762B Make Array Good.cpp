/*
    author    : MishkatIT
    created   : Friday 2022-12-16-05.18.30
    problem   : B. Make Array Good
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
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        vector<pair<int, long long>> ans;
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            long long x = ceil((double)log2(v[i]));
            long long y = (long long)pow(2, x);
//            cout << "y " << y << '\n';
            if(y != v[i])
            {
                cnt++;
                ans.emplace_back(i,(long long) y - v[i]);
            }
        }
        cout << cnt << '\n';
        for (auto i: ans)
            cout << i.first << ' ' << i.second << '\n';


    }
    return 0;
}


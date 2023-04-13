/*
    author    : MishkatIT
    created   : Thursday 2023-04-13-23.53.15
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;

void print(vector<int>&x)
{
    cout << x.size();
    for(auto &i: x)
        cout << ' ' << i;
    cout << '\n';
}

int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n, s1, s2;
        cin >> n >> s1 >> s2;
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v[i] = {x, i + 1};
        }
        sort(v.rbegin(), v.rend());
        int p1 = s1, p2 = s2;
        vector<int> a, b;
        for (int i = 0; i < n; i++)
        {
            if(p1 <= p2)
            {
                a.push_back(v[i].second);
                p1 += s1;
            }
            else
            {
                b.push_back(v[i].second);
                p2 += s2;
            }
        }
        print(a);
        print(b);
    }
    return 0;
}

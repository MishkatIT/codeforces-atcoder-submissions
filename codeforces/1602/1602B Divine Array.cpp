/*
    author    : MishkatIT
    created   : Friday 2023-05-26-18.32.33
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
        vector<vector<int>> v;
        vector<int> temp(n);
        for (auto& i: temp)
        {
            cin >> i;
        }
        for (int i = 0;; i++)
        {
            v.push_back(temp);
            vector<int> freq(2020, 0);
            for (int x = 0; x < n; x++)
                freq[temp[x]]++;
            for (int j = 0; j < n; j++)
            {
                temp[j] = freq[temp[j]];
            }
            if(v[i] == temp)break;
        }
        int mx = v.size() - 1;

        int q;
        cin >> q;
        while(q--)
        {
            int ax, kth;
            cin >> ax >> kth;
            if(kth >= mx)
                kth = mx;
            cout << v[kth][--ax] << '\n';
        }
    }
    return 0;
}


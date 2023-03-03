/*
    author    : MishkatIT
    created   : Thursday 2023-03-02-11.04.18
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
const int inf = 1e9 + 7;
using namespace std;


int digitSum(int x)
{
    int s = 0;
    while(x)
    {
        s += (x % 10);
        x /= 10;
    }
    return s;
}

int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n, q;
        cin >> n >> q;
        set<int> index;
        vector<int> v(n);
        for (auto& i: v)
            cin >> i;
        for (int i = 0; i < n; i++)
        {
            index.insert(i);
        }
        while (q--)
        {
            int type;
            cin >> type;
            if (type & 1)
            {
                int l, r;
                cin >> l >> r;
                if(index.empty()) continue;
                l--, r--;
                vector<int> tt;
                auto lb = index.lower_bound(l);
                while (*lb <= r && lb != index.end())
                {
                    int sum = digitSum(v[*lb]);
                    if (sum < 10)
                    {
                        tt.push_back(*lb);
                    }
                    v[*lb] = sum;
                    lb++;
//                    cout << 'x';
                }
//                debug(tt.size());
                if(tt.size())
                {
                    for(auto &i: tt)
                        index.erase(i);
                }
            }
            else
            {
                int t;
                cin >> t;
                t--;
                cout << v[t] << "\n";
            }
        }
    }
    return 0;
}


/*
    author    : MishkatIT
    created   : Saturday 2023-05-20-01.07.13
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        string src, target;
        cin >> src >> target;

        vector<int> mpa(26, 0);
        for(auto& i: src)
            mpa[i - 'A']++;

        vector<int> mpb(26, 0);
        for (auto& i: target)
            mpb[i - 'A']++;

        string x = "";
        int p = 0;
        for (auto& i: src)
        {
            if(i == target[p])
            {
                if(mpa[i - 'A'] == mpb[i - 'A'])
                {
                    mpb[i - 'A']--;
                    x += i;
                    p++;
                    if(p == target.size())break;
                }
            }
//            debug(p);
            mpa[i - 'A']--;

        }
//        debug(x);
        cout << (x == target ? "YES" : "NO") << '\n';
    }
    return 0;
}


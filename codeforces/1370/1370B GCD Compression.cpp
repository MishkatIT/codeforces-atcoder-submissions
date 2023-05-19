/*
    author    : MishkatIT
    created   : Friday 2023-05-19-18.53.51
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
        int n;
        cin >> n;
        vector<int> odd, even;
        for (int i = 0; i < n * 2; i++)
        {
            int x;
            cin >> x;
            if(x & 1)
                odd.push_back(i + 1);
            else
                even.push_back(i + 1);
        }
        int cnt = n - 1;
        for (int i = 0; cnt > 0; i += 2)
        {
            if(i + 1 < odd.size())
                cout << odd[i] << ' ' << odd[i + 1] << '\n', cnt--;
            if(i + 1 < even.size() && cnt > 0)
                cout << even[i] << ' ' << even[i + 1] << '\n', cnt--;
        }
    }
    return 0;
}


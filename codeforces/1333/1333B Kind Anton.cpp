/*
    author    : MishkatIT
    created   : Friday 2023-05-19-17.38.37
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
const int N = 1e5 + 10;

int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<vector<int>> track(n + 10, vector<int>(2));
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            track[i + 1][0] = a[i] < 0 || track[i][0];
            track[i + 1][1] = a[i] > 0 || track[i][1];
        }
        vector<int> b(n);
        for (auto& i : b)
        {
            cin >> i;
        }
        bool ok = true;
        for (int i = n - 1; i >= 0; i--)
        {
            if (b[i] < a[i])
            {
                if (!track[i][0])
                {
                    ok = false;
                    break;
                }
            }
            else if (b[i] > a[i])
            {
                if (!track[i][1])
                {
                    ok = false;
                    break;
                }
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}

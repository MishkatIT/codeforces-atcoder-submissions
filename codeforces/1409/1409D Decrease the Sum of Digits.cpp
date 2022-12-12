#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
using namespace std;
signed main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        string n;
        int s;
        cin >> n >> s;
        int sum = 0;
        for(int i = 0; i < n.length(); i++)
            sum += (n[i] - '0');
        if(sum <= s)
        {
            cout << 0 << '\n';
            continue;
        }

        int ans = 0;
        int p = 1;
        bool ok = false;
        for(int i = n.length() - 1; i >= 0; i--)
        {
            int temp = (int)(n[i] - '0');
            if(i != n.size() - 1)
            {
                temp += 1;
                if(temp == 10)
                {
                    sum -= 9;
                    p *= (int)10;
                    continue;
                }
                if(sum <= s)
                {
                    ok = true;
                    break;
                }
            }
            sum -= (temp - 1);
            temp = (int)(10 - temp) * p;
            ans += temp;
            if(sum <= s)
            {
                ok = true;
                break;
            }
            p *= (int)10;
        }

        cout << ans << '\n';
    }
}

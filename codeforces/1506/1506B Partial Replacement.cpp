/*
    author    : MishkatIT
    created   : Tuesday 2023-05-30-16.32.28
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
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        int i;
        int ans = 0;
        for(i = 0; i < n; i++)
        {
            if(str[i] == '*')
            {
                str[i] = 'x';
                ans++;
                break;
            }
        }
        for (; i + k < n;)
        {
            int j;
            for (j = i + k; j > i; j--)
            {
                if(str[j] == '*')
                {
                    str[j] = 'x';
                    ans++;
                    break;
                }
            }
            if(i == j)break;
            i = j;
        }
//        debug(str);
        int z;
        for(z = n - 1; z >= 0; z--)
        {
            if(str[z] == '*')
            {
                str[z] = 'x';
                ans++;
                break;
            }
            else if(str[z] == 'x')break;
        }
//        debug(str);
//        debug(z);
        bool stop = false;
        for (; z - k >= 0; )
        {
            int x;
            for (x = z - 1; x > z - k; x--)
            {
//              debug(str[x]);
                if(str[x] == 'x')
                {
                    stop = true;
                    break;
                }
            }
            if(stop)break;
//            debug(z - k);
            if(str[z - k] == '*')
            {
                ans++;
                str[z - k] = 'x';
            }
            z -= k;
        }
//        debug(str);

        cout << ans << '\n';
    }
    return 0;
}


/*
    author    : MishkatIT
    created   : Thursday 2023-02-16-21.15.41
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int a, b;
        int cntk = 0;
        int up = 0, down = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            if(k >= a && k <= b)
            {
                cntk++;
                if(a <= k - 1)
                {
                    down++;
                }
                if(b >= k + 1)
                {
                    up++;
                }
            }
        }
        bool ok = false;
        if(cntk > up && cntk > down)
            ok = true;
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}

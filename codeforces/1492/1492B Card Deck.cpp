/*
    author    : MishkatIT
    created   : Saturday 2023-06-17-19.20.27
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
        const int N = 1e5 + 10;
        vector<int> v(n), freq(N + 10);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            freq[v[i]]++;
        }
        vector<int> ans(n);
        int it = 0;
        int a = n - 1;
        for (int i = N - 5; i > 0; i--)
        {
            if(freq[i] == 0)continue;
            int b = a;
            while(v[a] != i)
            {
                if(a == 0)break;
                a--;
            }
            for (int x = a; x <= b; x++)
            {
                freq[v[x]]--;
                ans[it++] = v[x];
            }
            a--;
        }

        for (int i = 0; i < n; i++)
            cout << ans[i] << " \n"[i == n - 1];
    }

    return 0;
}
// switching implementation... 
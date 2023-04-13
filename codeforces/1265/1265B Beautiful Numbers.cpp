/*
    author    : MishkatIT
    created   : Thursday 2023-04-13-20.21.04
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
        int n;
        cin >> n;
        vector<int>v(n + 10);
        int one;
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            if(v[i] == 1)
                one = i;
        }
        priority_queue<int> pq;
        int k = 1;
        int i = one - 1, j = one;
        string ans = "";
        while(k <= n)
        {
            if(0 < i && j <= n)
            {
                if(v[i] < v[j])
                {
                    pq.push(v[i--]);
                }
                else
                {
                    pq.push(v[j++]);
                }
            }
            else if(0 < i)
                pq.push(v[i--]);
            else
                pq.push(v[j++]);
            ans += (pq.size() == pq.top() ? "1" : "0");
            k++;
        }
        cout << ans << '\n';
    }
    return 0;
}

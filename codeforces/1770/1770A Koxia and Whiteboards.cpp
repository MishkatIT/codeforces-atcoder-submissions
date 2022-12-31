/*
    author    : MishkatIT
    problem   : A. Koxia and Whiteboards
*/
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
        int n, m;
        cin >> n >> m;
        priority_queue<int, vector<int>, greater<int>> pq;
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            pq.push(temp);
        }
        while(m--)
        {
            cin >> temp;
            pq.pop();
            pq.push(temp);
        }
        int sum = 0;
        while(!pq.empty())
        {
            sum += pq.top();
            pq.pop();
        }
        cout << sum << '\n';
    }
    return 0;
}

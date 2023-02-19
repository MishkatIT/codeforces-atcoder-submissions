/*
    author    : MishkatIT
    created   : Sunday 2023-02-19-22.02.55
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
#define N 100000
using namespace std;
int dp[N];
int h[N];

int minCost(int i)
{
    if(i == 0)
        return 0;
    if(dp[i] != -1)
            return dp[i];
    int cost = INT_MAX;
    cost = min(cost, minCost(i - 1) + abs(h[i] - h[i - 1]));
    if(i > 1)
        cost = min(cost, minCost(i - 2) + abs(h[i] - h[i - 2]));
    return dp[i] = cost;

}

int main()
{
    fio;
    memset(dp, -1, sizeof dp);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    cout << minCost(n - 1);
    return 0;
}


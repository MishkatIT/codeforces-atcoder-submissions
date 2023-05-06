/*
    author    : MishkatIT
    created   : Saturday 2023-05-06-22.29.37
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1005;
int grid[MAXN][MAXN];
bool visited[MAXN][MAXN];
int n, m;

int dfs(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m || visited[i][j] || grid[i][j] == 0)
    {
        return 0;
    }
    visited[i][j] = true;
    int depth = grid[i][j];
    depth += dfs(i+1, j);
    depth += dfs(i-1, j);
    depth += dfs(i, j+1);
    depth += dfs(i, j-1);
    return depth;
}

int findLargestLake()
{
    int largestLake = 0;
    memset(visited, false, sizeof(visited));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visited[i][j] && grid[i][j] > 0)
            {
                int lakeVolume = dfs(i, j);
                largestLake = max(largestLake, lakeVolume);
            }
        }
    }
    return largestLake;
}

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }
        cout << findLargestLake() << "\n";
    }
    return 0;
}

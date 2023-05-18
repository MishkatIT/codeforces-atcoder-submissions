/*
    author    : MishkatIT
    created   : Thursday 2023-05-18-19.54.05
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
const int N = 250000 + 100;
vector<int> v[N];
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v[x].push_back(x);
            for (int j = 1; j < m; j++)
            {
                int temp;
                cin >> temp;
                v[x].push_back(temp);
            }
        }
        int arr[m][n];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >>arr[i][j];
            }
        }
        for (int i = 0; i < m; i++)
        {
            if(v[arr[i][0]].size() > 0)
            {
                for (int j = 0; j < n; j++)
                {
                    for(auto& k: v[arr[i][j]])
                        cout << k << ' ';
                    cout << '\n';
                    v[arr[i][j]].clear();
                }
                break;
            }
        }
    }
    return 0;
}

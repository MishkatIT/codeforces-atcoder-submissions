/*
    author    : MishkatIT
    created   : Tuesday 2023-06-20-19.48.21
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
        int n;
        cin >> n;
        char arr[n + 10][n + 10];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> arr[i][j];
            }
        }
        int s = 0, f = 0;
        vector<pair<int, int>> ans;
        if(arr[1][2] != arr[2][1])
        {
            if(arr[n][n - 1] != arr[n - 1][n])
            {
                cout << 2 << '\n';
                arr[1][2] = arr[2][1];
                cout << "1 2" << '\n';
                if(arr[n][n - 1] == arr[1][2])
                    cout << n << ' ' << n - 1 << '\n';
                else
                    cout << n - 1 << ' ' << n << '\n';
            }
            else
            {
                cout << 1 << '\n';
                if(arr[1][2] == arr[n][n - 1])
                    cout << "1 2" << '\n';
                else
                    cout << "2 1" << '\n';

            }
        }
        else
        {
            if(arr[n][n - 1] != arr[n - 1][n])
            {
                cout << 1 << '\n';
                if(arr[n][n - 1] == arr[1][2])
                    cout << n << ' ' << n - 1 << '\n';
                else
                    cout << n - 1 << ' ' << n << '\n';
            }
            else
            {
                if(arr[1][2] == arr[n][n - 1])
                {
                    cout << 2 << '\n';
                    cout << "1 2" << '\n';
                    cout << "2 1" << '\n';
                }
                else
                {
                    cout << 0 << '\n';
                }
            }
        }
    }

    return 0;
}


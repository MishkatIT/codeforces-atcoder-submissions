/*
    author    : MishkatIT
    created   : Tuesday 2023-05-30-00.01.49
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
        int n = 3;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int mx = arr[0] + arr[1] + arr[2] - 3;

        sort(arr, arr + n);
        int mn = max(0, arr[2] - arr[1] - arr[0] - 1);
//        debug(mx)debug(mn)
        int m;
        cin >> m;
        if(m < mn || m > mx)
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }
    return 0;
}


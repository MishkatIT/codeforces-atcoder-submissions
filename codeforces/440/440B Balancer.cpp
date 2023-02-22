/*
    author    : MishkatIT
    created   : Thursday 2023-02-23-00.02.38
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
#define int long long
using namespace std;
signed main()
{
    fio;
    int n;
    cin >> n;
    int arr[n];
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    int avg = sum / n;
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int temp = (arr[i] - avg);
        ans += abs(temp);
        arr[i + 1] += temp;
    }
    cout << ans;
    return 0;
}


/*
    author    : MishkatIT
    created   : Wednesday 2023-04-26-12.06.32
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if(n == 1)
    {
        cout << 0 << '\n' << arr[0];
        return 0;
    }
    int y = 0;
    int ans[n];
    ans[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i] + arr[i - 1];
        if(temp < k)
        {
            y += k - temp;
            arr[i] += k - temp;
        }
        ans[i] = arr[i];
    }
    cout << y << '\n';
    for (int i = 0; i < n; i++)
        cout << arr[i] << " \n"[i == n - 1];
    return 0;
}


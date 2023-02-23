/*
    author    : MishkatIT
    created   : Thursday 2023-02-23-23.17.25
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    int arr[n][2];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
        if (arr[i][0] < arr[i][1])
            swap(arr[i][0], arr[i][1]);

    }
    for (int i = 1; i < n; i++)
    {
        if(arr[i][0] <= arr[i - 1][0])continue;
        else if(arr[i][1] <= arr[i - 1][0])
            arr[i][0] = arr[i][1];
        else
        {
            cout << "NO" << '\n';
            return 0;
        }
    }
    cout << "YES" << '\n';
    return 0;
}

/*
    author    : MishkatIT
    created   : Monday 2023-02-13-21.10.33
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
    n++;
    int arr[n];
    arr[0] = 0;
    for (int i = 1 ; i < n; i++)
    {
        cin >> arr[i];
    }
    long long energy = 0, ans = 0;
    for (int i = 1; i < n; i++)
    {
        energy += arr[i - 1] - arr[i];
//        debug(energy);
        if(energy < 0)
        {
            ans += abs(energy);
            energy = 0;
        }
    }
    cout << ans;
    return 0;
}
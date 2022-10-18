/*
    author    : MishkatIT
    created   : Wednesday 2022-10-19-03.49.08
    problem   : 337 A. Puzzles
*/
#include<iostream>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    int n, m;
    cin >> n >> m;
    int arr[m];
    for(int i=0; i<m; i++)
        cin >> arr[i];
    sort(arr, arr+m);
    int ans = arr[n-1]-arr[0];
    for(int i=0; i<m-n+1; i++)
        ans = min(ans, arr[i+n-1]-arr[i]);
    cout << ans;

    return 0;
}


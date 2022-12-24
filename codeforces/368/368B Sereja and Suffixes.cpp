/*
    author    : MishkatIT
    created   : Sunday 2022-12-25-01.24.22
    problem   : B. Sereja and Suffixes
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n, m;
    cin >> n >> m;
    int arr[n];
    vector<int> v(1e5 + 10, false);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        v[arr[i]] = true;
    }
    reverse(arr, arr + n);
    vector<int> psum(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        if(v[arr[i - 1]])
        {
            psum[i] = psum[i - 1] + 1;
            v[arr[i - 1]] -= 1;
        }
        else
            psum[i] = psum[i - 1];
    }
    int l;
    for (int i = 0; i < m; i++)
    {
        cin >> l;
        cout << psum[n - l + 1] << '\n';
    }
    return 0;
}


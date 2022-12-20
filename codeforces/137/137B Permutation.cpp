/*
    author    : MishkatIT
    created   : Wednesday 2022-12-21-03.43.57
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    vector<int> v(5000 + 10, false);
    int temp;
    for (int i = 1; i <= n; i++)
    {
        cin >> temp;
        v[temp] = i;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if(!v[i])
            ans++;
    }
    cout << ans;

    return 0;
}


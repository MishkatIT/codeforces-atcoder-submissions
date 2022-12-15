/*
    author    : MishkatIT
    created   : Friday 2022-12-16-03.19.23
    problem   : A. Bear and Game
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    vector<int> v(90 + 1, 0);
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v[x]++;
    }
    int ans = 0;
    int cnt = 0;
    for (int i = 1; cnt < 15 && i <= 90; i++)
    {
        cnt++;
        if(v[i] != 0)
            cnt = 0;
        ans++;
    }
    cout << ans;
    return 0;
}


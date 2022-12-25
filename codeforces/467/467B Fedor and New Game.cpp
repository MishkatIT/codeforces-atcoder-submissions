/*
    author    : MishkatIT
    created   : Monday 2022-12-26-00.04.56
    problem   : B. Fedor and New Game
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//#define int long long
using namespace std;
int main()
{
    fio;
    int n, m, k;
    cin >> n >> m >> k;
    bitset<32> arr[m + 5];
    int temp;
    for (int i = 0; i < m + 1; i++)
    {
        cin >> temp;
        arr[i] = temp;
    }
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        int dif = 0;
        for (int j = 0; j < 32; j++)
        {
            if(arr[m][j] != arr[i][j])
                dif++;
        }
        if(dif <= k)
            ans++;
    }
    cout << ans << '\n';
    return 0;
}

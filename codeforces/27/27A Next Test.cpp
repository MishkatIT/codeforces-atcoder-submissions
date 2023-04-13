/*
    author    : MishkatIT
    created   : Thursday 2023-04-13-16.50.03
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    const int N = 3 * 1e3 + 10;
    vector<int> v(N, 0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[x]++;
    }
    for (int i = 1; i < N; i++)
    {
        if(!v[i])
        {
            cout << i;
            return 0;
        }
    }
}

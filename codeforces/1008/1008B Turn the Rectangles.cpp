/*
    author    : MishkatIT
    created   : Thursday 2023-02-23-22.32.58
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
    int w, h, mx = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> w >> h;
        if(w < h)
            swap(w, h);
        if(w <= mx)
            mx = w;
        else if(h <= mx)
            mx = h;
        else
        {
            cout << "NO" << '\n';
            return 0;
        }
    }
    cout << "YES" << '\n';
    return 0;
}

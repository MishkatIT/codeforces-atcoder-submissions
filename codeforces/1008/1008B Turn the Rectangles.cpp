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
    int w, h;
    cin >> w >> h;
    if(w < h)
        swap(w, h);
    int temp = w;
    bool ok = true;
    for (int i = 1; i < n; i++)
    {
        cin >> w >> h;
        if(w < h)
            swap(w, h);
        if(w > temp && h > temp)
            ok = false;
        if(w <= temp) temp = w;
        else if(h <= temp) temp = h;
    }
    cout << (ok ? "YES" : "NO") << '\n';
    return 0;
}

/*
    author    : MishkatIT
    created   : Monday 2023-02-13-21.34.07
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
    int temp;
    int mx = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        mx = max(mx, temp); // energy never exceed the max.
    }
    cout << mx;
    return 0;
}

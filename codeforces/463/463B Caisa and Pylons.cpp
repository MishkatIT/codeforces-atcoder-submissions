/*
    author    : MishkatIT
    created   : Monday 2023-02-13-21.42.29
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
    vector<int> v(n);
    for(auto& i: v)
        cin >> i;
    sort(v.begin(), v.end());
    cout << v.back();
    return 0;
}

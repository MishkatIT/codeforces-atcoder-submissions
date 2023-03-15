/*
    author    : MishkatIT
    created   : Wednesday 2023-03-15-23.22.23
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        a = abs(a);
        b = abs(b);
        if(a < b){
            swap(a, b);
        }
        cout << max(0, a - b - 1) + a + b << '\n';
    }
    return 0;
}


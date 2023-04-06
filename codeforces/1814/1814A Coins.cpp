/*
    author    : MishkatIT
    created   : Friday 2023-04-07-00.08.29
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
        long long n, k;
        cin >> n >> k;
        if(k % 2 == 0 && n % 2 == 1)
          cout << "NO" << '\n';
        else
          cout << "YES" << '\n';
    }
    return 0;
}

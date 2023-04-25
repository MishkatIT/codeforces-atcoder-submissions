/*
    author    : MishkatIT
    created   : Tuesday 2023-04-25-13.15.41
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
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
    }
    int ans = 0;
    for (int i = 1; i <= 5; i++)
    {
        if((sum + i) % (n + 1) != 1)
            ans++;
    }
    cout << ans;
    return 0;
}


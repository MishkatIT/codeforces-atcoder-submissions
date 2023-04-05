/*
    author    : MishkatIT
    created   : Wednesday 2023-04-05-22.57.16
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
        long long n;
        cin >> n;
        vector<int> ans;
        while(n)
        {
            int x = n % 9;
            if(x > 3)
                ans.push_back(x + 1);
            else
                ans.push_back(x);
            n /= 9;
        }
        for (int i = ans.size() - 1; i >= 0; i--)
        {
            cout << ans[i];
        }
        cout << '\n';
    }
    return 0;
}


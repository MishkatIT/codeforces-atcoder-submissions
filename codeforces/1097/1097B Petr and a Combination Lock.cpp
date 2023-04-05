/*
    author    : MishkatIT
    created   : Thursday 2023-04-06-00.36.18
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;

    //solving by using power set;
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &i : v)
    {
        cin >> i;
    }
    bool ok = false;
    for (int i = 0; i < (1 << n); i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if((i & (1 << j)) != 0)
            {
                sum += v[j];
            }
            else
            {
                sum -= v[j];
            }
        }
        if(sum % 360 == 0)
        {
            ok = true;
            break;
        }
    }
    cout << (ok ? "YES" : "NO");
    return 0;
}


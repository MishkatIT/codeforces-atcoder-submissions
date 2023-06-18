/*
    author    : MishkatIT
    created   : Sunday 2023-06-18-23.23.53
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        vector<int> freq(110);
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            freq[x]++;
        }
        bool ok = true;
        for (int i = 101; i > 0; i--)
        {
            if(freq[i - 1] < freq[i])
            {
                ok = false;
                break;
            }
//            freq[i - 1] -= freq[i];
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}


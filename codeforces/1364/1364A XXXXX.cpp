/*
    author    : MishkatIT
    created   : Sunday 2022-11-27-02.00.29
    problem   : 1364 A. XXXXX
*/
#include<iostream>
#include<vector>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        vector<long long> psum(n + 1, 0);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            psum[i + 1] = psum[i] + arr[i];
        }
        bool ok = false;
        long long len = n;
        for (int i = n; i >= 0; i--)
        {
            if(psum[i] % x != 0)
            {
                ok = true;
                break;
            }
            len--;
        }
        long long inilen = len;

        len = n;
        long long temp = psum[n];
        for (int i = 1; i <= n; i++)
        {
            if(temp % x != 0)
            {
                ok = true;
                break;
            }
            temp -= (psum[i]);
            len--;
        }
        if(!ok)
            cout << -1 << '\n';
        else
            cout << max (inilen, len) << '\n';
    }
    return 0;
}




/*
    author    : MishkatIT
    created   : Friday 2022-11-11-22.35.38
    problem   : au
*/
#include<iostream>
#include<map>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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
        long long ans = 0;
        long long a;
        map<long long, long long> mp;
        for(long long i = 0; i < n; i++)
        {
            cin >> a;
            mp[a - i]++;
            if(mp[a - i] > 1)
                ans += mp[a - i] - 1;
        }
        cout << ans << '\n';
    }
    return 0;
}




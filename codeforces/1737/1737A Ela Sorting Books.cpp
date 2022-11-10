/*
    author    : MishkatIT
    created   : Thursday 2022-11-10-17.20.03
    problem   : 1737 A. Ela Sorting Books
*/
#include<iostream>
#include<map>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        map<char, int> mp;
        char c;
        for(int i = 0; i < n; i++)
        {
            cin >> c;
            mp[c]++;
        }
        bool ok = false;
        char ans = 'a';
        int temp = 0;
        int ch  = 0;
        map<char, int> :: iterator itr;
        for(int i = 1; i <= k; i++)
        {
            for(itr = mp.begin(); itr != mp.end(); itr++)
            {
                if(itr -> second > 0)
                {
                    temp++;
                    if(itr -> first == ans)
                    {
                        ++ans;
                    }
                    itr -> second--;
                }
                if(temp == (n / k))
                {
                    ok = true;
                    break;
                }
            }
            if(!ok)
            {
                for(itr = mp.begin(); itr != mp.end(); itr++)
                {
                    while(itr -> second > (k - i))
                    {
                        itr -> second--;
                        temp++;
                        if(temp == n / k)
                            goto en;
                    }
                }
            }
en:
            temp = 0;
            cout << ans;
            ans = 'a';
            ok = false;
        }
        cout << '\n';
    }

    return 0;
}

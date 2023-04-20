/*
    author    : MishkatIT
    created   : Thursday 2023-04-20-12.55.51
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

bool solve(void)
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int t1, m, t2, i;
    t1 = m = t2 = 0;
    int mx = (n / 3);
    if(mx * 3 != n)
        return false;
    for (i = 0; i < n; i++)
    {
        if(str[i] == 'T')
        {
            if(t1 < mx)
                t1++;
            else if(t2 < m)
                t2++;
        }
        else if(m < t1)
            m++;
        else
            return false;
    }
    if(t1 == mx && m == mx && t2 == mx && i == n)
        return true;
    return false;

}

int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        if(solve())
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}

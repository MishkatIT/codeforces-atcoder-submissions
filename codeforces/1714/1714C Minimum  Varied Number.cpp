/*
    author    : MishkatIT
    created   : Thursday 2022-11-24-16.03.56
    problem   : 1714 C. Minimum Varied Number
*/
#include<iostream>
#include<set>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        set<int>s;
        cin >> n;
        for (int i = 9; i > 0; i--)
            if (n >= i)
                {
                    s.insert(i);
                    n -= i;
                }
        for (auto i: s)
                cout << i;
        cout << '\n';
    }
    return 0;
}




/*
    author    : MishkatIT
    created   : Monday 2022-11-07-03.09.48
    problem   : 1692 B. All Distinct
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
        cin >> n;
        set<int>s;
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            s.insert(temp);
        }
        if((n - s.size()) % 2 == 0)
            cout << s.size()<< '\n';
        else
            cout << s.size() - 1 << '\n';
    }

    return 0;
}


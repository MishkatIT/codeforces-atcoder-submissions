/*
    author    : MishkatIT
    created   : Tuesday 2023-05-16-18.41.22
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n, q;
    cin >> n >> q;
    deque<int> dq;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        dq.push_back(x);
    }
    while(q--)
    {
        int x;
        cin >> x;
        for (int i = 0; i < n; i++)
        {
            if(dq[i] == x)
            {
                cout << i + 1 << ' ';
                dq.erase(dq.begin() + i);
                dq.insert(dq.begin(), x);
                break;
            }
        }
    }
    return 0;
}


/*
    author    : MishkatIT
    created   : Saturday 2022-12-24-03.19.05
    problem   : B. Shopping
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n, m, k;
    cin >> n >> m >> k;
    deque<int> dq(k);
    for (int i = 0; i < k; i++)
        cin >> dq[i];
    int a;
    int sum = 0;
    int temp;
    while(n--)
    {
        for (int i = 0; i < m; i++)
        {
            cin >> a;
            int j;
            for (j = 0;; j++)
            {
                if(dq[j] == a)
                    break;
            }
            sum += j + 1;
            temp = dq[j];
            dq.erase(dq.begin() + j);
            dq.push_front(temp);
        }
    }
    cout << sum;

    return 0;
}


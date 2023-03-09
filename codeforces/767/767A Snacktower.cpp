/*
    author    : MishkatIT
    created   : Thursday 2023-03-09-17.18.50
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    priority_queue<int> pq;
    int current = n;
    for(int i = 0; i < n; i++)
    {
        pq.push(v[i]);
        if(pq.top() == current && !pq.empty())
        {
            while(pq.top() == current && !pq.empty())
            {
                cout << pq.top() << ' ';
                pq.pop();
                current--;
            }
            if(current != 0)
                cout << '\n';
        }
        else
            cout << '\n';
    }
    return 0;
}


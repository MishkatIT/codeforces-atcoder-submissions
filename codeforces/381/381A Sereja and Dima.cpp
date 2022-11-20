/*
    author    : MishkatIT
    created   : Sunday 2022-11-20-12.33.02
    problem   : 381 A. Sereja and Dima v2
*/
#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>
#include<deque>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    deque<int> dq;
    int temp;
    while(n--)
    {
        cin >> temp;
        dq.push_back(temp);
    }
    int sereja = 0, dima = 0, toggle = 0;
    while(!dq.empty())
    {
        if(!(toggle & 1))
            sereja += max (dq.front(), dq.back());
        else
            dima += max (dq.front(), dq.back());

        dq.front() > dq.back() ? dq.pop_front() : dq.pop_back();
        toggle++;
    }
    cout << sereja << ' ' << dima;


    return 0;
}

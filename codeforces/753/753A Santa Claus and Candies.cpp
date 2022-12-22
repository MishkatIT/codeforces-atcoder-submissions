/*
    author    : MishkatIT
    created   : Thursday 2022-12-22-21.55.36
    problem   : A. Santa Claus and Candies
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    int temp = 0;
    vector<int> s;
    for (int i = 1; (n - (temp + i)) > i; i++)
    {
        s.push_back(i);
        temp += i;
    }
    if(temp != n)
        s.push_back(n - temp);
    cout << s.size() << '\n';
    for (auto& i: s)
            cout << i << ' ';
    return 0;
}

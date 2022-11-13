/*
    author    : MishkatIT
    created   : Monday 2022-11-14-02.29.15
    problem   : 474 B. Worms
*/
#include<iostream>
#include<vector>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    vector<long long> psum(1,0);
    int temp = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        psum.push_back(psum.back() + temp);
    }
    int m;
    cin >> m;
    int q;
    for (int i = 0; i < m; i++)
    {
        cin >> q;
        cout << lower_bound(psum.begin(), psum.end(), q) - psum.begin() << '\n';
    }
    return 0;
}




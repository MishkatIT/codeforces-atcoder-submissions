/*
    author    : MishkatIT
    created   : Sunday 2022-12-04-00.42.20
    problem   : 1560 A. Dislike of Threes
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
vector<int>v(1, 0);
void threeLess(void)
{
    int cnt = 0;
    for (int i = 1;; i++)
    {
        if((i % 3 != 0) && (i % 10 != 3))
        {
            v.push_back(i);
            cnt++;
        }
        if(cnt == 1000)
            break;
    }
}
int main()
{
    fio;
    threeLess();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << v[n] << '\n';
    }
    return 0;
}


/*
    author    : MishkatIT
    created   : Saturday 2022-10-15-06.08.48
    problem   : 1017 A. The Rank
*/
#include<iostream>
#include<numeric>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    int n, sum=0, ans=1, mark[4];
    cin >> n;

    for(int i=0; i<4; i++)
        cin >> mark[i];
    sum=accumulate(mark,mark+4, sum);

    for(int i=1; i<n; i++)
    {
        int s =0;
        for(int i=0; i<4; i++)
            cin >> mark[i];

        if(accumulate(mark, mark+4, s)>sum)
            ans++;
    }

    cout << ans;

    return 0;
}




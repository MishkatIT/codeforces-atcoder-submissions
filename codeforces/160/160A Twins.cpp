/*  author    : MishkatIT
    created   : Sunday 2022-10-09-02.57.03
    problem   : 160 A. Twins*/
#include<iostream>
#include<numeric>
#include<algorithm>
#include<cmath>
#define nl "\n"
#define fori(ini,con,upd) for (int i = ini; i < con; i+=upd)
#define forj(ini,con,upd) for (int j = ini; j < con; j+=upd)
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    int coin, sum=0, cnt=0, ans=0;
    cin >> coin;
    int value[coin];
    fori(0,coin,1)
    cin >> value[i];
    sum=accumulate(value,value+coin,sum);
    int half = sum/2;
    sort(value, value+coin, greater<>());
    for( int i= 0; cnt<sum; i++)

        if(cnt<=half)
        {
            cnt+=value[i];
            ans++;
        }
        else break;

    cout << ans;
    return 0;
}



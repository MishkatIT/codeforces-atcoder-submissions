#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    int lemons, apples, pears, cnt=0;
    cin >> lemons >> apples >> pears;
    for(int i=0;;i++)
    {
        lemons-=1;
        apples-=2;
        pears-=4;
        if(lemons>=0 && apples>=0 && pears>=0)
            cnt+=7;
        else break;
    }
    cout << cnt;
    return 0;
}




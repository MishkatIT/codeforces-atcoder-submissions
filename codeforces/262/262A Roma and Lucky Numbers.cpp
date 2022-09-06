#include<iostream>
#define nl "\n"
#define forn(i) for (int i = 0; i < n; i++)
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()

{
    int n, k, nums;
    cin >> n >> k;
    int res=0;
    forn(i)
    {
        cin >> nums;
        int cnt=0;
        while(nums > 0)
        {
            int rem =nums%10;
            nums/=10;
            if(rem==4||rem==7)
                cnt++;
        }
        if(cnt<=k)
            res++;
    }
    cout<<res<<endl;
    return 0;
}


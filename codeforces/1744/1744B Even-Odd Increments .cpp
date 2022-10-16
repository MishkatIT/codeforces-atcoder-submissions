/*
    author    : MishkatIT
    created   : Sunday 2022-10-16-22.06.07
    problem   : 1744 B. Even-Odd Increments
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    long long  t;
    cin >> t;
    while(t--)
    {
        long long  n, q,  temp, ev=0, od=0, ans=0;
        cin >> n >> q;
        for (long long  i=0; i<n; i++)
        {
            cin >> temp;
            if(temp%2)
                od++;
            else
                ev++;
            ans+=temp;


        }

        long long  a, b;
        while(q--)
        {
            cin >> a >> b;
            if(a==0)
            {
                ans+=ev*b;
                {
                    if(b%2)
                    {
                        od+=ev;
                        ev=0;
                    }

                }

            }
            else
            {
                ans+=od*b;
                {
                    if(b%2==1)
                    {
                        ev+=od;
                        od=0;
                    }

                }
            }

            cout << ans << '\n';
        }

    }


}



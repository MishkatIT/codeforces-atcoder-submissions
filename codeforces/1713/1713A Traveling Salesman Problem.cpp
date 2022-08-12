#include<iostream>
#include<cstdlib>
using namespace std;

int main()

{

    long int t, n, a, u, d, l, r, arr[2];
    cin >> t;
    while(t--)
    {
        r=0;
        l=0;
        u=0;
        d=0;
        a=1;
        int i = 0;
        cin >> n;
        while(n--)
        {

            cin >> arr[i];
            a = a + i;
            cin >> arr[a];

            if (arr[i] > 0 && arr[i] > r)
            {
                r = r + (arr[i] - r);
            }
            else if (arr[i] < 0 && arr[i] < l)
            {
                l = l - (l - arr[i]);
            }
            else if (arr[a] > 0 && arr[a] > u)
            {
                u = u + (arr[a] - u);
            }
            else if (arr[a] < 0 && arr[a] < d)
            {
                d = d - (d - arr[a]);
            }


            i = 0;



        }
        cout << 2*(r + abs(l) + u + abs(d)) << endl;


    }

}

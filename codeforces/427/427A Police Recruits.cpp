#include<iostream>
using namespace std;

int main()
{
    int n, e = 0, p = 0, cnt = 0, c = 0;
    cin >> n;
    while(n--)
    {
        cin >> e;
        if (e == -1)
        {
            if (p > 0)
                p -= 1;
            else
                cnt++;
        }

        else if (e <= 10 && e >= 0)
        {
            p += e;
        }
        else
        {
            p+=10;
        }


    }
    cout << cnt;
}

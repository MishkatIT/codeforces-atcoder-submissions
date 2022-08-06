#include<iostream>
using namespace std;
int main()

{
    int n, p, v, t, sol = 0, i;

    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> p >> v >> t;

        if(p == 1 && v == 1)
        {
            sol++;
        }
        else if(p == 1 && t == 1)
        {
            sol++;
        }
        else if(v == 1 && t == 1)
        {
            sol++;
        }

    }
    cout << sol << endl;
}

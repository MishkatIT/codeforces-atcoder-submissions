#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long int x, steps = 0;
    cin >> x;
    if (x == 0)
        cout << steps <<endl;

    else if (x <= 5 && x > 0)
        cout << steps+1 <<endl;

    else if(x > 5)
    {
        steps= ceil((long double)x/5);

        cout << steps <<endl;
    }


}

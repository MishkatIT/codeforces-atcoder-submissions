
#include<iostream>
#include<cmath>
using namespace std;
int main()

{
    long long int n, k, result, x;
    cin >> n >> k;
    x = ceil((long double)n/2);
    if (k <= x)
    {
        result = 1+(k-1)*2;
    }
    else
    {
        result = 2+(k-x-1)*2;
    }
    cout << result <<endl;
}

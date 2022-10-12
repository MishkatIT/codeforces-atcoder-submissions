/*
    author    : MishkatIT
    created   : Wednesday 2022-10-12-21.24.35
    problem   : 935 A. Fafa and his Company
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

//function to count the total number of prime factors of the inputted number
int primeFactors(int n)
{
    int div = 2,same=0, ans=1, flag=0, i;
    while(n>1)
    {
        if(n%div==0)
        {
            same++;
            flag++;
            n/=div;
            i=div;
        }
        else
        {
            div++;
            flag=0;
        }
        if(flag==0)
        {
            ans*=(same+1);
            same=0;
        }
    }
    if(div==i)
        ans*=(same+1);
    return ans;
}

int main()
{
    fio;
    int num;
    cin >> num;
    cout << primeFactors(num)-1;

    return 0;
}




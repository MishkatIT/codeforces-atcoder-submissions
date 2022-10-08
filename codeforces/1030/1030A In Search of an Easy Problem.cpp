/*  author    : MishkatIT
    created   : Saturday 2022-10-08-23.02.14
    problem   : 1030 A. In Search of an Easy Problem*/
#include<iostream>
#define nl "\n"
#define fori(ini,con,upd) for (int i = ini; i < con; i+=upd)
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    int n, opinion;
    cin >> n;
    fori(0,n,1)
        {
            cin >> opinion;
            if(opinion)
            {
                cout <<  "HARD";
                return 0;
            }
            else continue;
        }
    cout << "EASY";

    return 0;
}



#include<iostream>
#define yes cout << "YES";
#define no cout << "NO";
using namespace std;
int main()
{
    int row, coordinate, x=0, y=0, z=0;
    cin >> row;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin >> coordinate;
            if(j==0)
                x+=coordinate;
            else if (j==1)
                y+=coordinate;
            else
                z+=coordinate;
        }
    }
    if(x==0 && y==0 && z==0)
    {
        yes
    }
    else no
        return 0;
}

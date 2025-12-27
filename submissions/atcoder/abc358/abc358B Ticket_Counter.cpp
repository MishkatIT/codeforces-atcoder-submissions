#include <iostream>
using namespace std;
int main() {
int a,b;
cin>>a>>b;
int arr[a];
for(int i=0;i<a;i++)
{
    cin>>arr[i];
}
int d=arr[0]+b;
        cout<<arr[0]+b<<endl;
for(int i=1;i<a;i++)
{
    

    
        if(arr[i]<=d)
        {
            cout<<b+d<<endl;
            d=d+b;
        }
        else
        {
            cout<<arr[i]+b<<endl;
            d=arr[i]+b;
        }
    
    
}
    return 0;
}
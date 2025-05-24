#include<stdio.h>
int main()
{
    int R,X;
    scanf("%d %d",&R,&X);
    if(R>=1&&R<=4229&&X>=1&&X<=2)
    {
        if(X==1&&R>=1600&&R<=2999)
        {
            printf("Yes");
        }
        else if(X==2&&R>=1200&&R<=2399)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }
    return 0;
}
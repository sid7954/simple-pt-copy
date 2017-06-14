#include<stdio.h>

int main()
{
    int a=1, b=2, n=400000000;
    int i=0;
    for(i=0;i<n;i++)
    {
        if(b<a)
        {
            a=1;
            b=2;
        }
        else
        {
            a=2;
            b=1;
        }
    }
    return 0;
}

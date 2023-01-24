//program to find the sum of given array:

#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6},i,sum=0;
    for(i=0;i<6;i++)
    {
        sum+=a[i];
    }
    printf("the sum of the given array is %d",sum);
}

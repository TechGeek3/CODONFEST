//Traverse and print elements in a spiral form of a matrix

#include <iostream>

using namespace std;

void spiral(int arr[][4], int n, int m)
{
    int T=0,B=n-1,L=0,R=m-1,dir=0;
    while(T<=B && L<=R)
    {
        if(dir==0)
        {
            for(int i=L;i<=R;++i)
                cout<<arr[T][i]<<" ";
            T++;
        }
        else if(dir==1)
        {
            for(int i=T;i<=B;++i)
                cout<<arr[i][R]<<" ";
            R--;
        }
        else if(dir==2)
        {
            for(int i=R;i>=L;--i)
                cout<<arr[B][i]<<" ";
            B--;
        }
        else if(dir==3)
        {
            for(int i=B;i>=T;--i)
                cout<<arr[i][L]<<" ";
            L++;
        }
        dir=(dir+1)%4;
    }
}

int main()
{
    int arr[4][4]={{2,3,1,0},{3,4,6,8,},{3,3,0,2},{3,6,8,3}};
    spiral(arr,4,4);
    return 0;
}
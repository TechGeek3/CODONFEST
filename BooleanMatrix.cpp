//Change all the rows and columns of boolean matrix corresponding to an element whose value is 1 otherwise let it remain 0.

#include<iostream>

using namespace std;

void change(int arr[][2], int m, int n)
{
    bool row[m],col[n];
    for(int i=0;i<m;++i)
        row[i]=0;
    for(int j=0;j<n;++j)
        col[j]=0;
    for(int i=0;i<m;++i)
    {
        for(int j=0;j<n;++j)
        {
            if(arr[i][j]==1)
            {
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for(int i=0;i<m;++i)
    {
        for(int j=0;j<n;++j)
        {
            if(row[i]==1 | col[j]==1)
            arr[i][j]=1;
        }
    }
    for(int i=0;i<m;++i)
    {
        for(int j=0;j<n;++j)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int arr[2][2]={{1,0},{0,0}};
    change(arr,2,2);
    
    return 0;
}
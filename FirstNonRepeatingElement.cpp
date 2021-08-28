//Find the first non-repeating element of an integer array.

#include<iostream>
using namespace std;

int firstnonrepeating(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        int j;
        for(j=0;j<n;j++)
        {
            if(i!=j && arr[i]==arr[j])
                break;
        }
        if(j==n)
            return arr[i];
    }
    return INT32_MAX;
}

int main()
{
    int arr[6]={9,4,9,6,6,4};
    cout<<firstnonrepeating(arr,6);
    return 0;
}